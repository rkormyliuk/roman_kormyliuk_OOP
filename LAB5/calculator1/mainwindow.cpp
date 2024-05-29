#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    connect(ui->button0, SIGNAL(released()), this, SLOT(digit_pressed()));
    connect(ui->button1, SIGNAL(released()), this, SLOT(digit_pressed()));
    connect(ui->button2, SIGNAL(released()), this, SLOT(digit_pressed()));
    connect(ui->button3, SIGNAL(released()), this, SLOT(digit_pressed()));
    connect(ui->button4, SIGNAL(released()), this, SLOT(digit_pressed()));
    connect(ui->button5, SIGNAL(released()), this, SLOT(digit_pressed()));
    connect(ui->button6, SIGNAL(released()), this, SLOT(digit_pressed()));
    connect(ui->button7, SIGNAL(released()), this, SLOT(digit_pressed()));
    connect(ui->button8, SIGNAL(released()), this, SLOT(digit_pressed()));
    connect(ui->button9, SIGNAL(released()), this, SLOT(digit_pressed()));

    connect(ui->buttonPlus, SIGNAL(released()), this, SLOT(binary_operation_pressed()));
    connect(ui->buttonMinus, SIGNAL(released()), this, SLOT(binary_operation_pressed()));
    connect(ui->buttonMultiply, SIGNAL(released()), this, SLOT(binary_operation_pressed()));
    connect(ui->buttonDivide, SIGNAL(released()), this, SLOT(binary_operation_pressed()));

    connect(ui->buttonEqual, SIGNAL(released()), this, SLOT(on_equal_button_clicked()));

    connect(ui->buttonClear, SIGNAL(released()), this, SLOT(on_clear_button_clicked()));

    userIsTypingSecondNumber = false;
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::digit_pressed()
{
    QPushButton *button = qobject_cast<QPushButton*>(sender());
    double labelNumber;
    QString newLabel;

    if ((ui->label->text().contains('.')) && (button->text() == "0")) {
        newLabel = ui->label->text() + button->text();
    } else {
        labelNumber = (ui->label->text() + button->text()).toDouble();
        newLabel = QString::number(labelNumber, 'g', 15);
    }

    ui->label->setText(newLabel);
}

void MainWindow::binary_operation_pressed()
{
    QPushButton *button = qobject_cast<QPushButton*>(sender());
    firstNum = ui->label->text().toDouble();
    currentOperator = button->text();
    userIsTypingSecondNumber = true;
}

void MainWindow::on_equal_button_clicked()
{
    double labelNumber, secondNum;
    QString newLabel;

    secondNum = ui->label->text().toDouble();

    if (currentOperator == "+") {
        labelNumber = firstNum + secondNum;
        newLabel = QString::number(labelNumber, 'g', 15);
        ui->label->setText(newLabel);
    } else if (currentOperator == "-") {
        labelNumber = firstNum - secondNum;
        newLabel = QString::number(labelNumber, 'g', 15);
        ui->label->setText(newLabel);
    } else if (currentOperator == "*") {
        labelNumber = firstNum * secondNum;
        newLabel = QString::number(labelNumber, 'g', 15);
        ui->label->setText(newLabel);
    } else if (currentOperator == "/") {
        if (secondNum == 0) {
            ui->label->setText("Error");
        } else {
            labelNumber = firstNum / secondNum;
            newLabel = QString::number(labelNumber, 'g', 15);
            ui->label->setText(newLabel);
        }
    }
    userIsTypingSecondNumber = false;
}

void MainWindow::on_clear_button_clicked()
{
    ui->label->setText("0");
    userIsTypingSecondNumber = false;
}
