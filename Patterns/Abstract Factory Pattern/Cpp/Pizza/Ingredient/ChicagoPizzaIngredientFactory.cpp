#include "./PizzaIngredientFactory.cpp"

#include "./Dough/ThickCrustDough.cpp"
#include "./Cheese/MozzarellaCheese.cpp"
#include "./Sauce/PlumTomatoSauce.cpp"
#include "./Pepperoni/SlicedPepperoni.cpp"
#include "./Clams/FrozenClams.cpp"
#include "./Veggies/Veggies.cpp"
#include "./Veggies/Garlic.cpp"
#include "./Veggies/Onion.cpp"
#include "./Veggies/Mushroom.cpp"
#include "./Veggies/RedPepper.cpp"

class ChicagoPizzaIngredientFactory : public PizzaIngredientFactory {
public:
    Dough* createDough() override {
        return new ThickCrustDough();
    }

    Sauce* createSauce() override {
        return new PlumTomatoSauce();
    }

    Cheese* createCheese() override {
        return new MozzarellaCheese();
    }

    Pepperoni* createPepperoni() override {
        return new SlicedPepperoni();
    }

    Clams* createClams() override {
        return new FrozenClams();
    }

    vector<Veggies*> createVeggies() override {
        return { new Garlic(),new Onion(),new Mushroom(),new RedPepper() };
    }
};