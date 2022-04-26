using System;

using IQuackBehavior = Behavior.IQuackBehavior;

namespace Behavior.Quack 
{
    public class Squeak : IQuackBehavior 
    {
        public void OnQuack() => Console.WriteLine("I Can Squeak.");
    }
}