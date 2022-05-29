using System;

namespace HomeTheater
{
    public class CdPlayer
    {
        private string description;
        private int currentTrack;
        private string? title;

        public CdPlayer(string description)
        {
            this.description = description;
        }

        public void On() => Console.WriteLine($"{description} on");

        public void Off() => Console.WriteLine($"{description} off");

        public void Eject()
        {
            title = null;
            Console.WriteLine($"{description} eject");
        }

        public void Play(string title)
        {
            this.title = title;
            currentTrack = 0;
            Console.WriteLine($"{description} playing \"{title}\"");
        }

        public void Play(int track)
        {
            if (title == null)
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

        public void Pause() => Console.WriteLine($"{description} pause \"{title}\"");

        public string Description { get => description; private set => description = value; }
    }
}