#include "../Pizza/Pizza.cpp"
#include "../Pizza/ChicagoStylePizza/ChicagoStyleCheesePizza.cpp"
#include "../Pizza/ChicagoStylePizza/ChicagoStyleClamPizza.cpp"
#include "../Pizza/ChicagoStylePizza/ChicagoStyleMeatPizza.cpp"
#include "../Pizza/ChicagoStylePizza/ChicagoStyleVeggiePizza.cpp"

#include "PizzaStore.cpp"

class ChicagoPizzaStore : public PizzaStore {
    Pizza* createPizza(string type) override {
        if (type == "cheese") return new ChicagoStyleCheesePizza();
        else if (type == "clam") return new ChicagoStyleClamPizza();
        else if (type == "meat") return new ChicagoStyleMeatPizza();
        else if (type == "veggie") return new ChicagoStyleVeggiePizza();
        else return nullptr;
    }
};