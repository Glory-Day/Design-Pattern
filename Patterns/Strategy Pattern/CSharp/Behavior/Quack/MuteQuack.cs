using System;

using IQuackBehavior = Behavior.IQuackBehavior;

namespace Behavior.Quack 
{
    public class MuteQuack : IQuackBehavior 
    {
        public void OnQuack() => Console.WriteLine("I Can't Quack.");
    }
}