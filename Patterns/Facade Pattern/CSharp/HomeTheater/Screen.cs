using System;

namespace HomeTheater
{
    public class Screen
    {
        private string description;

        public Screen(string description)
        {
            this.description = description;
        }

        public void Up() => Console.WriteLine($"{description} going up");

        public void Down() => Console.WriteLine($"{description} going down");

        public string Description { get => description; private set => description = value; }
    }
}