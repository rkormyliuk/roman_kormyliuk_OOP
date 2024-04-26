#include "Headphones.h"
#include <iostream>
Headphones::Headphones(std::string n, double p) : Product(n, p) {}

void Headphones::displayInfo() const {
    std::cout << "Headphones: " << name << ", Price: $" << price << std::endl;
}
