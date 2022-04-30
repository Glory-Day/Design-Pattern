namespace Coffee 
{
    public class DarkRoast : Beverage 
    {
        public DarkRoast() 
        {
            description = "Dark Roast Coffee";
        }

        public override double cost()
        {
            return 0.99;    
        }
    }
}