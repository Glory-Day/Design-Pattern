using System;

namespace Command.CailingFan
{
    public class CailingFan
    {
        private string location;
        public int State { get; private set; }

        public const int HIGH = 3;
        public const int MEDIUM = 2;
        public const int LOW = 1;
        public const int OFF = 0;

        public CailingFan(string location)
        {
            State = OFF;
            this.location = location;
        }

        public void SetHigh()
        {
            State = HIGH;
            Console.WriteLine($"{location} 선풍기 세기를 강으로 설정합니다.");
        }

        public void SetMedium()
        {
            State = MEDIUM;
            Console.WriteLine($"{location} 선풍기 세기를 중으로 설정합니다.");
        }

        public void SetLow()
        {
            State = LOW;
            Console.WriteLine($"{location} 선풍기 세기를 하로 설정합니다.");
        }

        public void Off()
        {
            State = OFF;
            Console.WriteLine($"{location} 선풍기가 꺼졌습니다.");
        }
    }
}