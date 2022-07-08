using Beverage = Coffee.Beverage;

namespace Decorator 
{
    public class Mocha : CondimentDecorator 
    {
        public Mocha(Beverage? beverage)
        {
            this.beverage = beverage;
        }

        public override string getDescription() => beverage?.getDescription() + " + Mocha";

        public override double cost() => beverage == null ? 0.20 : beverage.cost() + 0.20;
    }
}