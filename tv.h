#ifndef TV_H
#define TV_H

#include "Product.h"

class TV : public Product {
public:
    TV(std::string n, double p);
    void displayInfo() const override;
};

#endif // TV_H
