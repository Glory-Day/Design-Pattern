using System;

namespace Starbuzz
{
    public class CoffeeWithHook : CaffeineBeverageWithHook
    {
        private String? GetUserInput()
        {
            Console.Write("커피에 우유와 설탕을 넣을까요? (y/n) : ");
            return Console.ReadLine();
        }

        public override void Brew() => Console.WriteLine("필터로 커피를 우려내는 중");

        public override void AddCondiments() => Console.WriteLine("우유와 설탕을 추가하는 중");

        public override bool CustomerWantsCondiments() 
        {
            var answer = GetUserInput() ?? "n";

            if (answer.Equals("y")) return true;
            else return false;
        }
    }
}