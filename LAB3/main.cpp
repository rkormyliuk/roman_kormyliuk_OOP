#include <iostream>
#include <memory>

// Підключення файлів класів
#include "Product.h"
#include "Phone.h"
#include "Laptop.h"
#include "Headphones.h"
#include "TV.h"
#include "Scooter.h"
#include "ShoppingCart.h"


// Простий власний IoC контейнер
class IoCContainer {
public:
    template<typename T, typename... Args>
    std::shared_ptr<T> resolve(Args&&... args) {
        return std::make_shared<T>(std::forward<Args>(args)...);
    }
};
int main() {
    // Створення IoC контейнера
    IoCContainer container;

    // Створення залежностей та реєстрація їх у контейнері
    std::shared_ptr<Phone> phone1 = container.resolve<Phone>("iPhone 13", 999.99);
    std::shared_ptr<Phone> phone2 = container.resolve<Phone>("Galaxy S21", 899.99);
    std::shared_ptr<Phone> phone3 = container.resolve<Phone>("Huawei P40", 699.99);
    std::shared_ptr<Phone> phone4 = container.resolve<Phone>("Redmi Note 10", 299.99);
    std::shared_ptr<Phone> phone5 = container.resolve<Phone>("Nokia 8.3", 499.99);

    std::shared_ptr<Laptop> laptop1 = container.resolve<Laptop>("Asus ZenBook", 1299.99);
    std::shared_ptr<Laptop> laptop2 = container.resolve<Laptop>("HP Pavilion", 899.99);
    std::shared_ptr<Laptop> laptop3 = container.resolve<Laptop>("Lenovo ThinkPad", 1099.99);
    std::shared_ptr<Laptop> laptop4 = container.resolve<Laptop>("Acer Swift", 699.99);
    std::shared_ptr<Laptop> laptop5 = container.resolve<Laptop>("MacBook Air", 1299.99);

    std::shared_ptr<Headphones> headphones1 = container.resolve<Headphones>("Huawei FreeBuds", 129.99);
    std::shared_ptr<Headphones> headphones2 = container.resolve<Headphones>("Airpods Pro", 199.99);
    std::shared_ptr<Headphones> headphones3 = container.resolve<Headphones>("Sony WH-1000XM4", 349.99);
    std::shared_ptr<Headphones> headphones4 = container.resolve<Headphones>("Samsung Galaxy Buds", 149.99);
    std::shared_ptr<Headphones> headphones5 = container.resolve<Headphones>("Nokia True Wireless", 99.99);

    std::shared_ptr<TV> tv1 = container.resolve<TV>("LG OLED", 1499.99);
    std::shared_ptr<TV> tv2 = container.resolve<TV>("Samsung QLED", 1299.99);
    std::shared_ptr<TV> tv3 = container.resolve<TV>("Ergo LED", 899.99);
    std::shared_ptr<TV> tv4 = container.resolve<TV>("TCL Roku", 599.99);
    std::shared_ptr<TV> tv5 = container.resolve<TV>("Sony Bravia", 999.99);

    std::shared_ptr<Scooter> scooter1 = container.resolve<Scooter>("Maxxter TEO", 599.99);
    std::shared_ptr<Scooter> scooter2 = container.resolve<Scooter>("Acer Electrical", 699.99);
    std::shared_ptr<Scooter> scooter3 = container.resolve<Scooter>("Atlas Commuter", 799.99);
    std::shared_ptr<Scooter> scooter4 = container.resolve<Scooter>("Segway Ninebot", 899.99);
    std::shared_ptr<Scooter> scooter5 = container.resolve<Scooter>("Xiaomi Mi Electric Scooter Pro", 499.99);

    // Створення корзини
    std::shared_ptr<ShoppingCart> cart = container.resolve<ShoppingCart>();

    // Додавання товарів до корзини
    cart->addItem(phone1.get());
    cart->addItem(phone2.get());
    cart->addItem(phone3.get());
    cart->addItem(phone4.get());
    cart->addItem(phone5.get());

    cart->addItem(laptop1.get());
    cart->addItem(laptop2.get());
    cart->addItem(laptop3.get());
    cart->addItem(laptop4.get());
    cart->addItem(laptop5.get());

    cart->addItem(headphones1.get());
    cart->addItem(headphones2.get());
    cart->addItem(headphones3.get());
    cart->addItem(headphones4.get());
    cart->addItem(headphones5.get());

    cart->addItem(tv1.get());
    cart->addItem(tv2.get());
    cart->addItem(tv3.get());
    cart->addItem(tv4.get());
    cart->addItem(tv5.get());

    cart->addItem(scooter1.get());
    cart->addItem(scooter2.get());
    cart->addItem(scooter3.get());
    cart->addItem(scooter4.get());
    cart->addItem(scooter5.get());

    // Вивід змісту корзини
    cart->displayCart();

    // Видалення товару з корзини
    cart->removeItem(2);

    // Вивід оновленого змісту корзини
    cart->displayCart();

    return 0;
}
