using System.Collections.Generic;

namespace Pizza.Ingredient
{
    public interface PizzaIngredientFactory
    {
        Dough.Dough CreateDough();
        Cheese.Cheese CreateCheese();
        Clams.Clams CreateClams();
        Pepperoni.Pepperoni CreatePepperoni();
        Sauce.Sauce CreateSauce();
        Veggies.Veggies[] CreateVeggies();
    }
}