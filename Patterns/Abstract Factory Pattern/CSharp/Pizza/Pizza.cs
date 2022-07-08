using System;

using Ingredient = Pizza.Ingredient;

namespace Pizza
{
    public abstract class Pizza
    {
        private string name;
        public string Name { get => name; set => name = value; }

        public Ingredient.Dough.Dough? dough;
        public Ingredient.Sauce.Sauce? sauce;
        public Ingredient.Cheese.Cheese? cheese;
        public Ingredient.Pepperoni.Pepperoni? pepperoni;
        public Ingredient.Clams.Clams? clams;
        public Ingredient.Veggies.Veggies[] veggies;

        public Pizza() 
        {
            name = "일반 피자";
            dough = null;
            sauce = null;
            cheese = null;
            pepperoni = null;
            clams = null;
            veggies = new Ingredient.Veggies.Veggies[] {};
        }

        public abstract void Prepare();

        public void Bake() => Console.WriteLine("175도에서 25분 간 굽기");
        public void Cut() => Console.WriteLine("피자를 사선으로 자르기");
        public void Box() => Console.WriteLine("상자에 피자 담기");
    }
}