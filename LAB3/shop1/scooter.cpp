#include "Scooter.h"
#include <iostream>

Scooter::Scooter(std::string n, double p) : Product(n, p) {}

void Scooter::displayInfo() const {
    std::cout << "Scooter: " << name << ", Price: $" << price << std::endl;
}
