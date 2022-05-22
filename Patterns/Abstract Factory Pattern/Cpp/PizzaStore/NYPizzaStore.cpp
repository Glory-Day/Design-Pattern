#include "../Pizza/Pizza.cpp"

#include "../Pizza/Ingredient/PizzaIngredientFactory.cpp"
#include "../Pizza/Ingredient/NYPizzaIngredientFactory.cpp"

#include "../Pizza/CheesePizza.cpp"
#include "../Pizza/ClamPizza.cpp"
#include "../Pizza/PepperoniPizza.cpp"
#include "../Pizza/VeggiePizza.cpp"

#include "PizzaStore.cpp"

class NYPizzaStore : public PizzaStore {
    Pizza* pizza = nullptr;
    PizzaIngredientFactory* ingredientFactory = new NYPizzaIngredientFactory();

    Pizza* createPizza(string type) override {
        if (type == "cheese") {
            pizza = new CheesePizza(ingredientFactory);
            pizza->setName("뉴욕 스타일 치즈 피자\n");
        }
        else if (type == "clam") {
            pizza = new ClamPizza(ingredientFactory);
            pizza->setName("뉴욕 스타일 조개 피자\n");
        }
        else if (type == "pepperoni") {
            pizza = new PepperoniPizza(ingredientFactory);
            pizza->setName("뉴욕 스타일 페페로니 피자\n");
        }
        else if (type == "veggie") {
            pizza = new VeggiePizza(ingredientFactory);
            pizza->setName("뉴욕 스타일 채소 피자\n");
        }

        return pizza;
    }
};