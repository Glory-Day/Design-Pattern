using Pizza;

using NYStylePizza = Pizza.NYStylePizza;

namespace PizzaStore
{
    public class NYPizzaStore : PizzaStore 
    {
        protected override Pizza.Pizza? CreatePizza(string type)
        {
            switch (type) 
            {
                case "cheese" : return new NYStylePizza.NYStyleCheesePizza();
                case "clam" : return new NYStylePizza.NYStyleClamPizza();
                case "pepperoni" : return new NYStylePizza.NYStylePepperoniPizza();
                case "veggie" : return new NYStylePizza.NYStyleVeggiePizza();
            }

            return null;
        }
    }
}