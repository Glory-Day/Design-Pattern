using System;

namespace HomeTheater
{
    public class Tuner
    {
        private string description;
        private double frequency;

        public Tuner(string description)
        {
            this.description = description;
        }

        public void On() => Console.WriteLine($"{description} on");

        public void Off() => Console.WriteLine($"{description} off");

        public void SetFrequency(double frequency)
        {
            this.frequency = frequency;
            Console.WriteLine($"{description} setting frequency to {frequency}");
        }

        public void SetAm() => Console.WriteLine($"{description} setting AM mode");

        public void SetFm() => Console.WriteLine($"{description} setting FM mode");

        public string Description { get => description; private set => description = value; }
    }
}