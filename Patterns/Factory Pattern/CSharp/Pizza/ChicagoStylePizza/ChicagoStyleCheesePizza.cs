using System;

namespace Pizza.ChicagoStylePizza 
{
    public class ChicagoStyleCheesePizza : Pizza {
        public ChicagoStyleCheesePizza() : 
            base("시카고 스타일 딥 디쉬 치즈 피자", "아주 두꺼운 크러스트", "플럼토마토 소스") 
        {
            toppings.Add("\t잘게 조객낸 모짜렐라 치즈");
        }

        public override void Cut() => Console.WriteLine("네모난 모양으로 피자 자르기");
    }
}