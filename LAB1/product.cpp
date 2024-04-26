#include "Product.h"
#include <iostream>

Product::Product(std::string n, double p) : name(n), price(p) {}

void Product::displayInfo() const {
    std::cout << "Product: " << name << ", Price: $" << price << std::endl;
}

double Product::getPrice() const {
    return price;
}
