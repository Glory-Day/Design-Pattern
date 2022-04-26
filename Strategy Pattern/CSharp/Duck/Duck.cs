using System;

using IFlyBehavior = Behavior.IFlyBehavior;
using IQuackBehavior = Behavior.IQuackBehavior;

namespace Duck 
{
    public abstract class Duck 
    {
        protected IFlyBehavior flyBehavior; 
        protected IQuackBehavior quackBehavior;

        public Duck(IFlyBehavior fb, IQuackBehavior qb) 
        {
            flyBehavior = fb;
            quackBehavior = qb;
        }

        public abstract void OnDisplay();

        public void Swim() => Console.WriteLine("I Can Swim.");
        
        public void PerformFly() => flyBehavior.OnFly();
        public void PerformQuack() => quackBehavior.OnQuack();
    }
}