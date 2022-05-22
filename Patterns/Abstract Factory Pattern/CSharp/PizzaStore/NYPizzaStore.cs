using Ingredient = Pizza.Ingredient;

namespace PizzaStore
{
    public class NYPizzaStore : PizzaStore
    {
        private Pizza.Pizza? pizza;
        private Ingredient.PizzaIngredientFactory ingredientFactory;

        public NYPizzaStore() : base() 
        {
            pizza = null;
            ingredientFactory = new Ingredient.NYPizzaIngredientFactory();
        }

        protected override Pizza.Pizza? CreatePizza(string type) 
        {
            switch (type)
            {
                case "cheese" : 
                    pizza = new Pizza.CheesePizza(ingredientFactory);
                    pizza.Name = "뉴욕 스타일 치즈 피자";
                    break;
                case "clam" : 
                    pizza = new Pizza.ClamPizza(ingredientFactory);
                    pizza.Name = "뉴욕 스타일 조개 피자";
                    break;
                case "pepperoni" : 
                    pizza = new Pizza.PepperoniPizza(ingredientFactory);
                    pizza.Name = "뉴욕 스타일 페페로니 피자";
                    break;
                case "veggie" : 
                    pizza = new Pizza.VeggiePizza(ingredientFactory);
                    pizza.Name = "뉴욕 스타일 채소 피자";
                    break;
            }

            return pizza;
        }
    }
}