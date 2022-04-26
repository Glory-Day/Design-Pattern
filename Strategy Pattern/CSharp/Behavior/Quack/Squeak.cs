using System;

using QuackBehavior = Behavior.QuackBehavior;

namespace Behavior.Quack 
{
    public class Squeak : QuackBehavior 
    {
        public void quack() => Console.WriteLine("I Can Squeak.");
    }
}