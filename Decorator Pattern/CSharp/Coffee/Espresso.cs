namespace Coffee 
{
    public class Espresso : Beverage 
    {
        public Espresso() 
        {
            description = "Espresso";
        }

        public override double cost()
        {
            return 1.99;    
        }
    }
}