#pragma once

#include "./Pizza.cpp"
#include "./Ingredient/PizzaIngredientFactory.cpp"

class CheesePizza : public Pizza {
public:
    PizzaIngredientFactory* ingredientFactory;

    CheesePizza(PizzaIngredientFactory* ingredientFactory) : ingredientFactory{ingredientFactory} {}

    void prepare() override {
        cout << "준비 중: " << name;

        dough = ingredientFactory->createDough();
        sauce = ingredientFactory->createSauce();
        cheese = ingredientFactory->createCheese();

        cout << dough->getName() << "를 돌리는 중...\n";
        cout << sauce->getName() << "를 뿌리는 중...\n";
        cout << "토핑을 올리는 중...\n";
        cout << '\t' << cheese->getName() << '\n';
    }
};