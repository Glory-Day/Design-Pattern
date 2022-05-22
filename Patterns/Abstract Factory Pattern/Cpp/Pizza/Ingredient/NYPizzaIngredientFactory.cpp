#include "./PizzaIngredientFactory.cpp"

#include "./Dough/ThinCrustDough.cpp"
#include "./Cheese/ReggianoCheese.cpp"
#include "./Sauce/MarinaraSauce.cpp"
#include "./Pepperoni/SlicedPepperoni.cpp"
#include "./Clams/FreshClams.cpp"
#include "./Veggies/Veggies.cpp"
#include "./Veggies/Garlic.cpp"
#include "./Veggies/Onion.cpp"
#include "./Veggies/Mushroom.cpp"
#include "./Veggies/RedPepper.cpp"

class NYPizzaIngredientFactory : public PizzaIngredientFactory {
public:
    Dough* createDough() override {
        return new ThinCrustDough();
    }

    Sauce* createSauce() override {
        return new MarinaraSauce();
    }

    Cheese* createCheese() override {
        return new ReggianoCheese();
    }

    Pepperoni* createPepperoni() override {
        return new SlicedPepperoni();
    }

    Clams* createClams() override {
        return new FreshClams();
    }

    vector<Veggies*> createVeggies() override {
        return { new Garlic(),new Onion(),new Mushroom(),new RedPepper() };
    }
};