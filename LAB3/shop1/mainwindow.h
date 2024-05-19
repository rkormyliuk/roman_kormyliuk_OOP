#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "ShoppingCart.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow {
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_addItemButton_clicked();
    void on_removeItemButton_clicked();
    void displayCart();

private:
    Ui::MainWindow *ui;
    ShoppingCart cart;

    void setupProducts();
};

#endif // MAINWINDOW_H
