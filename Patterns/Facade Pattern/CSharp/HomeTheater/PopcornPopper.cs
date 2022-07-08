using System;

namespace HomeTheater
{
    public class PopcornPopper
    {
        private string description;

        public PopcornPopper(string description)
        {
            this.description = description;
        }

        public void On() => Console.WriteLine($"{description} on");

        public void Off() => Console.WriteLine($"{description} off");

        public void Pop() => Console.WriteLine($"{description} popping popcorn");

        public string Description { get => description; private set => description = value; }
    }
}