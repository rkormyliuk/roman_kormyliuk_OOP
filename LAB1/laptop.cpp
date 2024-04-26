#include "Laptop.h"
#include <iostream>
Laptop::Laptop(std::string n, double p) : Product(n, p) {}

void Laptop::displayInfo() const {
    std::cout << "Laptop: " << name << ", Price: $" << price << std::endl;
}
