// У файлі ShoppingCart.h

#ifndef SHOPPINGCART_H
#define SHOPPINGCART_H

#include "Product.h"

class ShoppingCart {
private:
    struct Node {
        Product* data;
        Node* next;
        
        Node(Product* pData, Node* pNext = nullptr) : data(pData), next(pNext) {}
    };

    Node* head;
    int itemCount; // Зберігає кількість елементів у кошику

public:
    ShoppingCart() : head(nullptr), itemCount(0) {} // Ініціалізуємо itemCount на початку
    void addItem(Product* item);
    void removeItem(int index);
    void displayCart() const;
    int getNumberOfItems() const; // Оголошення нового методу
    ~ShoppingCart();
};

#endif
