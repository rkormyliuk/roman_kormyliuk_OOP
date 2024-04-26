#ifndef SCOOTER_H
#define SCOOTER_H

#include "Product.h"

class Scooter : public Product {
public:
    Scooter(std::string n, double p);
    void displayInfo() const override;
};

#endif // SCOOTER_H
