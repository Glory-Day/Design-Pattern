using System;

namespace Subject
{
    public class Subject : Image
    {
        public Subject(string path) 
        {
            Console.WriteLine($"Load Image : {path}");
        }

        public void Render() => Console.WriteLine("Render Image");
    }
}