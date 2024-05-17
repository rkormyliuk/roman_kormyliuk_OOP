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

public:
    ShoppingCart() : head(nullptr) {}
    void addItem(Product* item);
    void removeItem(int index);
    void displayCart() const;
    ~ShoppingCart();
};

#endif 
