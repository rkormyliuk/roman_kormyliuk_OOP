#include <iostream>
#include "Product.h"
#include "Phone.h"
#include "Laptop.h"
#include "Headphones.h"
#include "TV.h"
#include "Scooter.h"
#include "ShoppingCart.h"

int main() {
    // Створення товарів
    Phone phone1("iPhone 13", 999.99);
    Phone phone2("Galaxy S21", 899.99);
    Phone phone3("Huawei P40", 699.99);
    Phone phone4("Redmi Note 10", 299.99);
    Phone phone5("Nokia 8.3", 499.99);

    Laptop laptop1("Asus ZenBook", 1299.99);
    Laptop laptop2("HP Pavilion", 899.99);
    Laptop laptop3("Lenovo ThinkPad", 1099.99);
    Laptop laptop4("Acer Swift", 699.99);
    Laptop laptop5("MacBook Air", 1299.99);

    Headphones headphones1("Huawei FreeBuds", 129.99);
    Headphones headphones2("Airpods Pro", 199.99);
    Headphones headphones3("Sony WH-1000XM4", 349.99);
    Headphones headphones4("Samsung Galaxy Buds", 149.99);
    Headphones headphones5("Nokia True Wireless", 99.99);

    TV tv1("LG OLED", 1499.99);
    TV tv2("Samsung QLED", 1299.99);
    TV tv3("Ergo LED", 899.99);
    TV tv4("TCL Roku", 599.99);
    TV tv5("Sony Bravia", 999.99);

    Scooter scooter1("Maxxter TEO", 599.99);
    Scooter scooter2("Acer Electrical", 699.99);
    Scooter scooter3("Atlas Commuter", 799.99);
    Scooter scooter4("Segway Ninebot", 899.99);
    Scooter scooter5("Xiaomi Mi Electric Scooter Pro", 499.99);

    // Створення корзини
    ShoppingCart cart;

    // Додавання товарів до корзини
    cart.addItem(&phone1);
    cart.addItem(&phone2);
    cart.addItem(&phone3);
    cart.addItem(&phone4);
    cart.addItem(&phone5);

    cart.addItem(&laptop1);
    cart.addItem(&laptop2);
    cart.addItem(&laptop3);
    cart.addItem(&laptop4);
    cart.addItem(&laptop5);

    cart.addItem(&headphones1);
    cart.addItem(&headphones2);
    cart.addItem(&headphones3);
    cart.addItem(&headphones4);
    cart.addItem(&headphones5);

    cart.addItem(&tv1);
    cart.addItem(&tv2);
    cart.addItem(&tv3);
    cart.addItem(&tv4);
    cart.addItem(&tv5);

    cart.addItem(&scooter1);
    cart.addItem(&scooter2);
    cart.addItem(&scooter3);
    cart.addItem(&scooter4);
    cart.addItem(&scooter5);

    // Вивід змісту корзини
    cart.displayCart();

    // Видалення товару з корзини
    cart.removeItem(2);

    // Вивід оновленого змісту корзини
    cart.displayCart();

    return 0;
}
