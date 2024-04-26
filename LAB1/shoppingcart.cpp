#include "ShoppingCart.h"
#include <iostream>

void ShoppingCart::addItem(Product* item) {
    items.push_back(item);
    std::cout << "Added item to the shopping cart." << std::endl;
}

void ShoppingCart::removeItem(int index) {
    if (index >= 0 && index < items.size()) {
        delete items[index];
        items.erase(items.begin() + index);
        std::cout << "Removed item from the shopping cart." << std::endl;
    } else {
        std::cout << "Invalid item index." << std::endl;
    }
}

void ShoppingCart::displayCart() const {
    std::cout << "Shopping Cart:" << std::endl;
    for (const auto& item : items) {
        item->displayInfo();
    }
}

ShoppingCart::~ShoppingCart() {
    for (auto& item : items) {
        delete item;
    }
}
