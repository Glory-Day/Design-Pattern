using System;

namespace Starbuzz 
{
    public abstract class CaffeineBeverageWithHook
    {
        public void PrepareRecipe() 
        {
            BoilWater();
            Brew();
            PourInCup();
            if (CustomerWantsCondiments()) AddCondiments();
        }

        public abstract void Brew();

        public abstract void AddCondiments();

        public virtual bool CustomerWantsCondiments() => true;

        public void BoilWater() => Console.WriteLine("물 끓이는 중");

        public void PourInCup() => Console.WriteLine("컵에 따르는 중");
    } 
}