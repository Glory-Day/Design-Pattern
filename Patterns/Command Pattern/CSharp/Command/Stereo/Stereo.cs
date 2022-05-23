using System;

namespace Command.Stereo
{
    public class Stereo
    {
        private string location;
        public int State { get; private set; }

        public const int CD = 3;
        public const int DVD = 2;
        public const int RADIO = 1;
        public const int OFF = 0;

        public Stereo(string location)
        {
            State = OFF;
            this.location = location;
        }

        public void On() => Console.WriteLine($"{location} 스테레오 전원을 켰습니다.");

        public void Off()
        {
            State = OFF;
            Console.WriteLine($"{location} 스테레오 전원을 껐습니다.");
        }

        public void SetCd()
        {
            State = CD;
            Console.WriteLine($"{location} 스테레오를 CD로 설정했습니다.");
        }

        public void SetDvd()
        {
            State = DVD;
            Console.WriteLine($"{location} 스테레오를 CD로 설정했습니다.");
        }

        public void SetRadio()
        {
            State = RADIO;
            Console.WriteLine($"{location} 스테레오를 CD로 설정했습니다.");
        }

        public void SetVolumn(int volumn) => Console.WriteLine($"{location} 스테레오를 볼륨을 {volumn}으로 설정했습니다.");
    }
}