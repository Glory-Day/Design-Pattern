using System;

using QuackBehavior = Behavior.QuackBehavior;

namespace Behavior.Quack 
{
    public class MuteQuack : QuackBehavior 
    {
        public void quack() => Console.WriteLine("I Can't Quack.");
    }
}