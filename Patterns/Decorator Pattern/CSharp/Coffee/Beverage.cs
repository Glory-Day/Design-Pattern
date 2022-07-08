namespace Coffee 
{
    public abstract class Beverage 
    {
        public string description = "No Title";

        public virtual string getDescription() => description;

        public abstract double cost();
    }
}