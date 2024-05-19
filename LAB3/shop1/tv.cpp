#include "TV.h"
#include <iostream>

TV::TV(std::string n, double p) : Product(n, p) {}

void TV::displayInfo() const {
    std::cout << "TV: " << name << ", Price: $" << price << std::endl;
}
