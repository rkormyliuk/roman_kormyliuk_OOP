#include "ShoppingCart.h"
#include <iostream>

void ShoppingCart::addItem(Product* item) {
    Node* newNode = new Node(item);
    if (!head) {
        head = newNode;
    } else {
        Node* temp = head;
        while (temp->next) {
            temp = temp->next;
        }
        temp->next = newNode;
    }
    std::cout << "Added item to the shopping cart.\n" << std::endl;
}

void ShoppingCart::removeItem(int index) {
    if (!head) {
        std::cout << "Cart is empty." << std::endl;
        return;
    }
    if (index == 0) {
        Node* temp = head;
        head = head->next;
        delete temp->data;
        delete temp;
        std::cout << "Removed item from the shopping cart." << std::endl;
        return;
    }
    Node* prev = nullptr;
    Node* curr = head;
    int count = 0;
    while (curr && count != index) {
        prev = curr;
        curr = curr->next;
        count++;
    }
    if (!curr) {
        std::cout << "Invalid item index." << std::endl;
        return;
    }
    prev->next = curr->next;
    delete curr->data;
    delete curr;
    std::cout << "Removed item from the shopping cart." << std::endl;
}

void ShoppingCart::displayCart() const {
    if (!head) {
        std::cout << "Shopping Cart is empty." << std::endl;
        return;
    }
    std::cout << "Shopping Cart:\n" << std::endl;
    Node* curr = head;
    while (curr) {
        curr->data->displayInfo();
        curr = curr->next;
    }
}

ShoppingCart::~ShoppingCart() {
    Node* curr = head;
    while (curr) {
        Node* temp = curr;
        curr = curr->next;
        delete temp->data;
        delete temp;
    }
}
