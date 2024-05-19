#include "Phone.h"
#include <iostream>

Phone::Phone(std::string n, double p) : Product(n, p) {}

void Phone::displayInfo() const {
    std::cout << "Phone: " << name << ", Price: $" << price << std::endl;
}
