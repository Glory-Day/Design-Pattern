namespace Menu
{
    public class MenuItem : MenuComponent
    {
        private string? name;
        private string? description;
        private bool isVegetarian;
        private double price;

        public MenuItem(string? name, string? description, bool vegetarian, double price) {
            Name = name;
            Description = description;
            Vegetarian = vegetarian;
            Price = price;
        }

        public override string? Name { get => name ?? "NoText"; set => name = value; }

        public override string? Description { get => description ?? "NoText"; set => description = value; }

        public override bool Vegetarian { get => isVegetarian; set => isVegetarian = value; }

        public override double Price { get => price; set => price = value; }

        public override void Print() {
            Console.Write($"  {name}");
            if (isVegetarian) Console.Write("(v)");
            Console.WriteLine($", {price}");
            Console.WriteLine($"  -- {description}");
        }
    }
}