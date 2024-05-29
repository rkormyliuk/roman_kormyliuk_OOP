#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void digit_pressed();
    void binary_operation_pressed();
    void on_equal_button_clicked();
    void on_clear_button_clicked();

private:
    Ui::MainWindow *ui;
    double firstNum;
    QString currentOperator;
    bool userIsTypingSecondNumber;
};

#endif // MAINWINDOW_H
