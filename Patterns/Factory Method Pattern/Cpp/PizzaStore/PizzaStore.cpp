#pragma once

#include <string>

#include "../Pizza/Pizza.cpp"

class PizzaStore {
protected:
    virtual Pizza* createPizza(string type) = 0;

public:
    Pizza* orderPizza(string type) {
        Pizza* pizza;

        pizza = createPizza(type);

        pizza->prepare();
        pizza->bake();
        pizza->cut();
        pizza->box();

        return pizza;
    }
};