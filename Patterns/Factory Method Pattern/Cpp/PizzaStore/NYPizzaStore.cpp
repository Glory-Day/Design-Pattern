#include "../Pizza/Pizza.cpp"
#include "../Pizza/NYStylePizza/NYStyleCheesePizza.cpp"
#include "../Pizza/NYStylePizza/NYStyleClamPizza.cpp"
#include "../Pizza/NYStylePizza/NYStylePepperoniPizza.cpp"
#include "../Pizza/NYStylePizza/NYStyleVeggiePizza.cpp"

#include "PizzaStore.cpp"

class NYPizzaStore : public PizzaStore {
    Pizza* createPizza(string type) override {
        if (type == "cheese") return new NYStyleCheesePizza();
        else if (type == "clam") return new NYStyleClamPizza();
        else if (type == "pepperoni") return new NYStylePepperoniPizza();
        else if (type == "veggie") return new NYStyleVeggiePizza();
        else return nullptr;
    }
};