using System;

namespace HomeTheater
{
    public class Projector
    {
        private string description;

        public Projector(string description)
        {
            this.description = description;
        }

        public void On() => Console.WriteLine($"{description} on");

        public void Off() => Console.WriteLine($"{description} off");

        public void WideScreenMode() => Console.WriteLine($"{description} in wide screen mode (16x9 aspect ratio)");

        public void TvMode() => Console.WriteLine($"{description} in tv mode (4x3 aspect ratio)");

        public string Description { get => description; private set => description = value; }
    }
}