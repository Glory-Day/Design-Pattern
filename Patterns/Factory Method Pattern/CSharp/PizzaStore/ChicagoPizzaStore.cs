using Pizza;

using ChicagoStylePizza = Pizza.ChicagoStylePizza;

namespace PizzaStore
{
    public class ChicagoPizzaStore : PizzaStore 
    {
        protected override Pizza.Pizza? CreatePizza(string type)
        {
            switch (type) 
            {
                case "cheese" : return new ChicagoStylePizza.ChicagoStyleCheesePizza();
                case "clam" : return new ChicagoStylePizza.ChicagoStyleClamPizza();
                case "meat" : return new ChicagoStylePizza.ChicagoStyleMeatPizza();
                case "veggie" : return new ChicagoStylePizza.ChicagoStyleVeggiePizza();
            }

            return null;
        }
    }
}