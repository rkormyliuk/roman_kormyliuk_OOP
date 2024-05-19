#include "Product.h"

Product::Product(std::string n, double p) : name(n), price(p) {}

double Product::getPrice() const {
    return price;
}

std::string Product::getName() const {
    return name;
}
