using System;

using QuackBehavior = Behavior.QuackBehavior;

namespace Behavior.Quack 
{
    public class Quack : QuackBehavior 
    {
        public void quack() => Console.WriteLine("I Can Quack.");
    }
}