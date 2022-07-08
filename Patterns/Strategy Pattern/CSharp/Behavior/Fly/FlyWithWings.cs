using System;

using IFlyBehavior = Behavior.IFlyBehavior;

namespace Behavior.Fly 
{
    public class FlyWithWings : IFlyBehavior 
    {
        public void OnFly() => Console.WriteLine("I Can Fly.");
    }
}