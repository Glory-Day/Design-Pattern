using System;

using Behavior;

namespace Duck 
{
    public class MallardDuck : Duck 
    {
        public MallardDuck() : 
            base(new Behavior.Fly.FlyWithWings(), new Behavior.Quack.Quack()) { }

        public override void OnDisplay() 
        {
            Console.WriteLine("I'm Mallard Duck.");
        }
    }
}