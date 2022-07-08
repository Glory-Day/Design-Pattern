using System;

namespace Pizza.NYStylePizza
{
    public class NYStyleCheesePizza : Pizza 
    {
        public NYStyleCheesePizza() :
            base("뉴욕 스타일 소스와 치즈 피자", "씬 크러스트 도우", "마리나라 소스")
        {
            toppings.Add("\t잘게 썬 레지아노 치즈");
        }
    }
}