namespace Pizza.Ingredient
{
    public class NYPizzaIngredientFactory : PizzaIngredientFactory
    {
        public Dough.Dough CreateDough() => new Dough.ThinCrustDough();
        public Sauce.Sauce CreateSauce() => new Sauce.MarinaraSauce();
        public Cheese.Cheese CreateCheese() => new Cheese.ReggianoCheese();
        public Pepperoni.Pepperoni CreatePepperoni() => new Pepperoni.SlicedPepperoni();
        public Clams.Clams CreateClams() => new Clams.FreshClams();
        public Veggies.Veggies[] CreateVeggies() => 
            new Veggies.Veggies[] { new Veggies.Garlic(),new Veggies.Mushroom(),new Veggies.Onion(),new Veggies.RedPepper() };
    }
}