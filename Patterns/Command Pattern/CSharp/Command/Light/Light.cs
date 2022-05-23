using System;

namespace Command.Light
{
    public class Light
    {
        private string location;
        public int State { get; private set; }

        public const int ON = 1;
        public const int OFF = 0;

        public Light(string location)
        {
            State = OFF;
            this.location = location;
        }

        public void On()
        {
            State = ON;
            Console.WriteLine($"{location} 조명이 켜졌습니다.");
        }

        public void Off()
        {
            State = OFF;
            Console.WriteLine($"{location} 조명이 꺼졌습니다.");
        }
    }
}