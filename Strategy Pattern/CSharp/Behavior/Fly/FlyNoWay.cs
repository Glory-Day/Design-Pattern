using System;

using IFlyBehavior = Behavior.IFlyBehavior;

namespace Behavior.Fly 
{
    public class FlyNoWay : IFlyBehavior 
    {
        public void OnFly() => Console.WriteLine("I Can't Fly.");
    }
}