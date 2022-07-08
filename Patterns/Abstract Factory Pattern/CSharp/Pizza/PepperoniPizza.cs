using System;

using PizzaIngredientFactory = Pizza.Ingredient.PizzaIngredientFactory;

namespace Pizza
{
    public class PepperoniPizza : Pizza
    {
        private PizzaIngredientFactory ingredientFactory;

        public PepperoniPizza(PizzaIngredientFactory ingredientFactory)
        {
            this.ingredientFactory = ingredientFactory;
        }

        public override void Prepare()
        {
            Console.WriteLine($"준비 중: {Name}");

            dough = ingredientFactory.CreateDough();
            sauce = ingredientFactory.CreateSauce();
            pepperoni = ingredientFactory.CreatePepperoni();

            Console.WriteLine($"{dough?.Name}을 뿌리는 중...");
            Console.WriteLine($"{sauce?.Name}을 뿌리는 중...");
            Console.WriteLine("토핑을 올리는 중...");
            Console.WriteLine($"\t{pepperoni?.Name}");
        }
    }
}