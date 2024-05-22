#ifndef PRODUCT_H
#define PRODUCT_H

#include <string>

class Product {
protected:
    std::string name;
    double price;

public:
    Product(std::string n, double p);
    virtual void displayInfo() const;
    double getPrice() const;
};

#endif // PRODUCT_H
