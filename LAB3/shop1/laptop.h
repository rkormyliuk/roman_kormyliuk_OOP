#ifndef LAPTOP_H
#define LAPTOP_H

#include "Product.h"

class Laptop : public Product {
public:
    Laptop(std::string n, double p);
    void displayInfo() const override;
};

#endif // LAPTOP_H
