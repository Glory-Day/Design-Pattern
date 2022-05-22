using System;
using System.Threading;

public class Singleton
{
    private static readonly Lazy<Singleton> _instance = 
        new Lazy<Singleton>(() => new Singleton());

    private Singleton() {}

    public static Singleton Instance
    {
        get
        {
            Console.WriteLine($"{_instance.ToString()}");
            return _instance.Value;
        }
    }

    public void Log() => Console.WriteLine($"Instance {_instance.ToString()}");
}