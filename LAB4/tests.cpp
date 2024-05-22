#include <cassert>
#include <iostream> // Додана бібліотека
#include "ShoppingCart.h"
#include "Product.h"

void testAddItem() {
    ShoppingCart cart;
    assert(cart.getNumberOfItems() == 0); // Перевірка, що кошик пустий спочатку

    Product* product = new Product("Test Product", 10.0);
    cart.addItem(product);

    assert(cart.getNumberOfItems() == 1); // Перевірка, що після додавання елемента кількість елементів збільшується
}

int main() {
    testAddItem();

    std::cout << "All tests passed successfully!" << std::endl;

    return 0;
}
