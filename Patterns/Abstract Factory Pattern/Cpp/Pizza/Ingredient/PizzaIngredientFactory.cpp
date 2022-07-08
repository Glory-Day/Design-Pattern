#pragma once

#include <vector>

#include "./Dough/Dough.cpp"
#include "./Cheese/Cheese.cpp"
#include "./Clams/Clams.cpp"
#include "./Pepperoni/Pepperoni.cpp"
#include "./Sauce/Sauce.cpp"
#include "./Veggies/Veggies.cpp"

#define interface class

interface PizzaIngredientFactory {
public:
    virtual Dough* createDough() = 0;
    virtual Cheese* createCheese() = 0;
    virtual Clams* createClams() = 0;
    virtual Pepperoni* createPepperoni() = 0;
    virtual Sauce* createSauce() = 0;
    virtual vector<Veggies*> createVeggies() = 0;
};