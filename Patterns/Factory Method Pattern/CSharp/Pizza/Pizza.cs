using System;
using System.Collections;

namespace Pizza
{
    public class Pizza 
    {
        public string name;
        public string dough;
        public string sauce;

        public ArrayList toppings;

        public Pizza(string name, string dough, string sauce) 
        {
            this.name = name;
            this.dough = dough;
            this.sauce = sauce;

            toppings = new ArrayList();
        }

        public void Prepare() 
        {
            Console.WriteLine($"준비 중: {name}");
            Console.WriteLine("도우를 돌리는 중...");
            Console.WriteLine("소스를 뿌리는 중...");
            Console.WriteLine("토핑을 올리는 중...");

            foreach (var topping in toppings) {
                Console.WriteLine(topping);
            }
        }

        public virtual void Bake() => Console.WriteLine("175도에서 25분 간 굽기");

        public virtual void Cut() => Console.WriteLine("피자를 사선으로 자르기");

        public virtual void Box() => Console.WriteLine("상자에 피자 담기");

        public virtual string GetName() => name;
    }
}