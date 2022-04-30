namespace Coffee 
{
    public class HouseBlend : Beverage 
    {
        public HouseBlend() 
        {
            description = "House Blend Coffee";
        }

        public override double cost()
        {
            return 0.89;
        }
    }
}