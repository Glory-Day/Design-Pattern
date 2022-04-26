using System;

using FlyBehavior = Behavior.FlyBehavior;

namespace Behavior.Fly 
{
    public class FlyNoWay : FlyBehavior 
    {
        public void fly() => Console.WriteLine("I Can't Fly.");
    }
}