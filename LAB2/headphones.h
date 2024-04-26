#ifndef HEADPHONES_H
#define HEADPHONES_H

#include "Product.h"

class Headphones : public Product {
public:
    Headphones(std::string n, double p);
    void displayInfo() const override;
};

#endif // HEADPHONES_H
