using System;

namespace HomeTheater
{
    public class Amplifier
    {
        private string description;
        private Tuner? tuner;
        private DvdPlayer? dvd;
        private CdPlayer? cd;

        public Amplifier(string description)
        {
            this.description = description;
        }

        public void On() => Console.WriteLine($"{description} on");

        public void Off() => Console.WriteLine($"{description} off");

        public void SetStereoSound() => Console.WriteLine($"{description} stereo mode on");

        public void SetSurroundSound() => Console.WriteLine($"{description} surround sound on (5 speaker, 1 subwoofer)");

        public void SetVolumn(int level) => Console.WriteLine($"{description} setting volumn to {level}");

        public void SetTuner(Tuner tuner)
        {
            this.tuner = tuner;
            Console.WriteLine($"{description} setting tuner to {tuner.Description}");
        }

        public void SetCd(CdPlayer cd)
        {
            this.cd = cd;
            Console.WriteLine($"{description} setting cd to {cd}");
        }

        public void SetDvd(DvdPlayer dvd)
        {
            this.dvd = dvd;
            Console.WriteLine($"{description} setting frequency to {dvd}");
        }

        public string Description { get => description; private set => description = value; }
    }
}