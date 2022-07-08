using System;

namespace Starbuzz
{
    public class TeaWithHook : CaffeineBeverageWithHook
    {
        private String? GetUserInput()
        {
            Console.Write("레몬을 넣을까요? (y/n) : ");
            return Console.ReadLine();
        }

        public override void Brew() => Console.WriteLine("찻잎를 우려내는 중");

        public override void AddCondiments() => Console.WriteLine("레몬을 추가하는 중");

        public override bool CustomerWantsCondiments() 
        {
            var answer = GetUserInput() ?? "n";

            if (answer.Equals("y")) return true;
            else return false;
        }
    }
}