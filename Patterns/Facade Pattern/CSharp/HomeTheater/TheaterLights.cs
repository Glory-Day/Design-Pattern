using System;

namespace HomeTheater
{
    public class TheaterLights
    {
        private string description;

        public TheaterLights(string description)
        {
            this.description = description;
        }

        public void On() => Console.WriteLine($"{description} on");

        public void Off() => Console.WriteLine($"{description} off");

        public void Dim(int level) => Console.WriteLine($"{description} dimming to {level}");

        public string Description { get => description; private set => description = value; }
    }
}