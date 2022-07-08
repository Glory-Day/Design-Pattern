using System;

namespace HomeTheater
{
    public class DvdPlayer
    {
        private string description;
        private int currentTrack;
        private string? movie;

        public DvdPlayer(string description)
        {
            this.description = description;
        }

        public void On() => Console.WriteLine($"{description} on");

        public void Off() => Console.WriteLine($"{description} off");

        public void Eject()
        {
            movie = null;
            Console.WriteLine($"{description} eject");
        }

        public void Play(string movie)
        {
            this.movie = movie;
            currentTrack = 0;
            Console.WriteLine($"{description} playing \"{movie}\"");
        }

        public void Play(int track)
        {
            if (movie == null)
            {
                Console.WriteLine($"{description} can't play track {currentTrack}, no cd inserted");
            }
            else
            {
                currentTrack = track;
                Console.WriteLine($"{description} playing track {currentTrack}");
            }
        }

        public void Stop() {
            currentTrack = 0;
            Console.WriteLine($"{description} stopped");
        }

        public void Pause() => Console.WriteLine($"{description} pause \"{movie}\"");

        public void SetTwoChannelAudio() => Console.WriteLine($"{description} set two channel audio");

        public void SetSurroundAudio() => Console.WriteLine($"{description} set surround audio");

        public string Description { get => description; private set => description = value; }
    }
}