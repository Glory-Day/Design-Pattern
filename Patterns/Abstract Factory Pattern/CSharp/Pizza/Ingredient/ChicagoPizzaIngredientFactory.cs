namespace Pizza.Ingredient
{
    public class ChicagoPizzaIngredientFactory : PizzaIngredientFactory
    {
        public Dough.Dough CreateDough() => new Dough.ThickCrustDough();
        public Sauce.Sauce CreateSauce() => new Sauce.PlumTomatoSauce();
        public Cheese.Cheese CreateCheese() => new Cheese.MozzarellaCheese();
        public Pepperoni.Pepperoni CreatePepperoni() => new Pepperoni.SlicedPepperoni();
        public Clams.Clams CreateClams() => new Clams.FrozenClams();
        public Veggies.Veggies[] CreateVeggies() => 
            new Veggies.Veggies[] { new Veggies.Garlic(),new Veggies.Mushroom(),new Veggies.Onion(),new Veggies.RedPepper() };
    }
}