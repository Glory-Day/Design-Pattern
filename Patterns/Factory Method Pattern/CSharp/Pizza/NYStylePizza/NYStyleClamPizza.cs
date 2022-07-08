using System;

namespace Pizza.NYStylePizza
{
    public class NYStyleClamPizza : Pizza 
    {
        public NYStyleClamPizza() :
            base("뉴욕 스타일 소스와 조개 피자", "씬 크러스트 도우", "마리나라 소스")
        {
            toppings.Add("\t잘게 썬 조개");
        }
    }
}