#ifndef PHONE_H
#define PHONE_H

#include "Product.h"

class Phone : public Product {
public:
    Phone(std::string n, double p);
    void displayInfo() const override;
};

#endif // PHONE_H
