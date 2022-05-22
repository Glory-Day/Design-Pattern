using Beverage = Coffee.Beverage;

namespace Decorator {
    public abstract class CondimentDecorator : Beverage 
    {
        public Beverage? beverage;
    }
}