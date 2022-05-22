using Pizza;

namespace PizzaStore
{
    public abstract class PizzaStore
    {
        protected abstract Pizza.Pizza? CreatePizza(string type);

        public Pizza.Pizza? OrderPizza(string type) {
            Pizza.Pizza? pizza = CreatePizza(type);

            pizza?.Prepare();
            pizza?.Bake();
            pizza?.Cut();
            pizza?.Box();

            return pizza;
        }
    }
}