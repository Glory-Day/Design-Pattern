using System;

using FlyBehavior = Behavior.FlyBehavior;

namespace Behavior.Fly 
{
    public class FlyWithWings : FlyBehavior 
    {
        public void fly() => Console.WriteLine("I Can Fly.");
    }
}