#include "MainWindow.h"
#include "ui_MainWindow.h"
#include "Phone.h"
#include "Laptop.h"
#include "Headphones.h"
#include "TV.h"
#include "Scooter.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    setupProducts();
    displayCart();
}

MainWindow::~MainWindow() {
    delete ui;
}

void MainWindow::setupProducts() {
    // Створення товарів
    Phone *phone1 = new Phone("iPhone 13", 999.99);
    Phone *phone2 = new Phone("Galaxy S21", 899.99);
    Phone *phone3 = new Phone("Huawei P40", 699.99);
    Phone *phone4 = new Phone("Redmi Note 10", 299.99);
    Phone *phone5 = new Phone("Nokia 8.3", 499.99);

    Laptop *laptop1 = new Laptop("Asus ZenBook", 1299.99);
    Laptop *laptop2 = new Laptop("HP Pavilion", 899.99);
    Laptop *laptop3 = new Laptop("Lenovo ThinkPad", 1099.99);
    Laptop *laptop4 = new Laptop("Acer Swift", 699.99);
    Laptop *laptop5 = new Laptop("MacBook Air", 1299.99);

    Headphones *headphones1 = new Headphones("Huawei FreeBuds", 129.99);
    Headphones *headphones2 = new Headphones("Airpods Pro", 199.99);
    Headphones *headphones3 = new Headphones("Sony WH-1000XM4", 349.99);
    Headphones *headphones4 = new Headphones("Samsung Galaxy Buds", 149.99);
    Headphones *headphones5 = new Headphones("Nokia True Wireless", 99.99);

    TV *tv1 = new TV("LG OLED", 1499.99);
    TV *tv2 = new TV("Samsung QLED", 1299.99);
    TV *tv3 = new TV("Ergo LED", 899.99);
    TV *tv4 = new TV("TCL Roku", 599.99);
    TV *tv5 = new TV("Sony Bravia", 999.99);

    Scooter *scooter1 = new Scooter("Maxxter TEO", 599.99);
    Scooter *scooter2 = new Scooter("Acer Electrical", 699.99);
    Scooter *scooter3 = new Scooter("Atlas Commuter", 799.99);
    Scooter *scooter4 = new Scooter("Segway Ninebot", 899.99);
    Scooter *scooter5 = new Scooter("Xiaomi Mi Electric Scooter Pro", 499.99);

    // Додавання товарів до корзини
    cart.addItem(phone1);
    cart.addItem(phone2);
    cart.addItem(phone3);
    cart.addItem(phone4);
    cart.addItem(phone5);

    cart.addItem(laptop1);
    cart.addItem(laptop2);
    cart.addItem(laptop3);
    cart.addItem(laptop4);
    cart.addItem(laptop5);

    cart.addItem(headphones1);
    cart.addItem(headphones2);
    cart.addItem(headphones3);
    cart.addItem(headphones4);
    cart.addItem(headphones5);

    cart.addItem(tv1);
    cart.addItem(tv2);
    cart.addItem(tv3);
    cart.addItem(tv4);
    cart.addItem(tv5);

    cart.addItem(scooter1);
    cart.addItem(scooter2);
    cart.addItem(scooter3);
    cart.addItem(scooter4);
    cart.addItem(scooter5);
}

void MainWindow::on_addItemButton_clicked() {
    // Тут можна реалізувати логіку додавання товару
}

void MainWindow::on_removeItemButton_clicked() {
    int index = ui->spinBox->value();
    cart.removeItem(index);
    displayCart();
}

void MainWindow::displayCart() {
    ui->textEdit->clear();
    auto head = cart.getHead();
    while (head) {
        ui->textEdit->append(QString::fromStdString(head->data->getName() + ": $" + std::to_string(head->data->getPrice())));
        head = head->next;
    }
}
