using Beverage = Coffee.Beverage;

namespace Decorator 
{
    public class Soy : CondimentDecorator 
    {
        public Soy(Beverage? beverage)
        {
            this.beverage = beverage;
        }

        public override string getDescription() => beverage?.getDescription() + " + Soy";

        public override double cost() => beverage == null ? 0.15 : beverage.cost() + 0.15;
    }
}