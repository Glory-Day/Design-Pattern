using System;

using FlyBehavior = Behavior.FlyBehavior;
using QuackBehavior = Behavior.QuackBehavior;

namespace Duck 
{
    public abstract class Duck 
    {
        protected FlyBehavior flyBehavior; 
        protected QuackBehavior quackBehavior;

        public Duck(FlyBehavior fb, QuackBehavior qb) 
        {
            flyBehavior = fb;
            quackBehavior = qb;
        }

        public abstract void display();

        public void swim() => Console.WriteLine("I Can Swim.");
        
        public void performFly() => flyBehavior.fly();
        public void performQuack() => quackBehavior.quack();
    }
}