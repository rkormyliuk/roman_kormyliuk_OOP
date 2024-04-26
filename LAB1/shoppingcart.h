#ifndef SHOPPINGCART_H
#define SHOPPINGCART_H

#include <vector>
#include "Product.h"

class ShoppingCart {
private:
    std::vector<Product*> items;

public:
    void addItem(Product* item);
    void removeItem(int index);
    void displayCart() const;
    ~ShoppingCart();
};

#endif // SHOPPINGCART_H
