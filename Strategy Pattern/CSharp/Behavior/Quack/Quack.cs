using System;

using IQuackBehavior = Behavior.IQuackBehavior;

namespace Behavior.Quack 
{
    public class Quack : IQuackBehavior 
    {
        public void OnQuack() => Console.WriteLine("I Can Quack.");
    }
}