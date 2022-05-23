using System;

namespace Command.GarageDoor
{
    public class GarageDoor
    {
        public int State { get; private set; }

        public const int ON = 1;
        public const int OFF = 0;

        public GarageDoor()
        {
            State = OFF;
        }

        public void Up()
        {
            State = ON;
            Console.WriteLine("차고 문이 올라갑니다.");
        }

        public void Down()
        {
            State = OFF;
            Console.WriteLine("차고 문이 내려갑니다.");
        }

        public void Stop() => Console.WriteLine("차고 문이 멈췄습니다.");

        public void LightOn() => Console.WriteLine("차고 조명이 켜졌습니다.");

        public void LightOff() => Console.WriteLine("차고 조명이 꺼졌습니다.");
    }
}