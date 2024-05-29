/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *buttonClear;
    QPushButton *button7;
    QPushButton *buttonPlus;
    QPushButton *button8;
    QPushButton *button9;
    QPushButton *button4;
    QPushButton *button5;
    QPushButton *button6;
    QPushButton *button1;
    QPushButton *buttonMinus;
    QPushButton *buttonMultiply;
    QPushButton *buttonDivide;
    QPushButton *buttonEqual;
    QPushButton *button3;
    QPushButton *button2;
    QPushButton *button0;
    QLabel *label;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        buttonClear = new QPushButton(centralwidget);
        buttonClear->setObjectName("buttonClear");
        buttonClear->setGeometry(QRect(30, 100, 75, 24));
        button7 = new QPushButton(centralwidget);
        button7->setObjectName("button7");
        button7->setGeometry(QRect(30, 140, 75, 24));
        buttonPlus = new QPushButton(centralwidget);
        buttonPlus->setObjectName("buttonPlus");
        buttonPlus->setGeometry(QRect(130, 100, 75, 24));
        button8 = new QPushButton(centralwidget);
        button8->setObjectName("button8");
        button8->setGeometry(QRect(130, 140, 75, 24));
        button9 = new QPushButton(centralwidget);
        button9->setObjectName("button9");
        button9->setGeometry(QRect(220, 140, 75, 24));
        button4 = new QPushButton(centralwidget);
        button4->setObjectName("button4");
        button4->setGeometry(QRect(30, 180, 75, 24));
        button5 = new QPushButton(centralwidget);
        button5->setObjectName("button5");
        button5->setGeometry(QRect(130, 180, 75, 24));
        button6 = new QPushButton(centralwidget);
        button6->setObjectName("button6");
        button6->setGeometry(QRect(220, 180, 75, 24));
        button1 = new QPushButton(centralwidget);
        button1->setObjectName("button1");
        button1->setGeometry(QRect(30, 220, 75, 24));
        buttonMinus = new QPushButton(centralwidget);
        buttonMinus->setObjectName("buttonMinus");
        buttonMinus->setGeometry(QRect(220, 100, 75, 24));
        buttonMultiply = new QPushButton(centralwidget);
        buttonMultiply->setObjectName("buttonMultiply");
        buttonMultiply->setGeometry(QRect(300, 100, 75, 24));
        buttonDivide = new QPushButton(centralwidget);
        buttonDivide->setObjectName("buttonDivide");
        buttonDivide->setGeometry(QRect(300, 140, 75, 24));
        buttonEqual = new QPushButton(centralwidget);
        buttonEqual->setObjectName("buttonEqual");
        buttonEqual->setGeometry(QRect(300, 260, 75, 24));
        button3 = new QPushButton(centralwidget);
        button3->setObjectName("button3");
        button3->setGeometry(QRect(220, 220, 75, 24));
        button2 = new QPushButton(centralwidget);
        button2->setObjectName("button2");
        button2->setGeometry(QRect(130, 220, 75, 24));
        button0 = new QPushButton(centralwidget);
        button0->setObjectName("button0");
        button0->setGeometry(QRect(130, 260, 75, 24));
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(180, 70, 49, 16));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 22));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        buttonClear->setText(QCoreApplication::translate("MainWindow", "C", nullptr));
        button7->setText(QCoreApplication::translate("MainWindow", "7", nullptr));
        buttonPlus->setText(QCoreApplication::translate("MainWindow", "+", nullptr));
        button8->setText(QCoreApplication::translate("MainWindow", "8", nullptr));
        button9->setText(QCoreApplication::translate("MainWindow", "9", nullptr));
        button4->setText(QCoreApplication::translate("MainWindow", "4", nullptr));
        button5->setText(QCoreApplication::translate("MainWindow", "5", nullptr));
        button6->setText(QCoreApplication::translate("MainWindow", "6", nullptr));
        button1->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
        buttonMinus->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
        buttonMultiply->setText(QCoreApplication::translate("MainWindow", "*", nullptr));
        buttonDivide->setText(QCoreApplication::translate("MainWindow", "/", nullptr));
        buttonEqual->setText(QCoreApplication::translate("MainWindow", "=", nullptr));
        button3->setText(QCoreApplication::translate("MainWindow", "3", nullptr));
        button2->setText(QCoreApplication::translate("MainWindow", "2", nullptr));
        button0->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "\320\222\320\262\320\265\320\264\321\226\321\202\321\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
