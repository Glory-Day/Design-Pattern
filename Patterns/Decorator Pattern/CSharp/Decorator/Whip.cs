using Beverage = Coffee.Beverage;

namespace Decorator 
{
    public class Whip : CondimentDecorator 
    {
        public Whip(Beverage? beverage)
        {
            this.beverage = beverage;
        }

        public override string getDescription() => beverage?.getDescription() + " + Whip";

        public override double cost() => beverage == null ? 0.10 : beverage.cost() + 0.10;
    }
}