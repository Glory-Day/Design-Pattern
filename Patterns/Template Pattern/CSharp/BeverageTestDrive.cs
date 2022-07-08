using System;

using Starbuzz;

public class BeverageTestDrive
{
    public static void Main(String[] args)
    {
        Starbuzz.TeaWithHook teaHook = new TeaWithHook();
        Starbuzz.CoffeeWithHook coffeeHook = new CoffeeWithHook();

        Console.WriteLine("\n홍차를 준비 중...");
        teaHook.PrepareRecipe();

        Console.WriteLine("\n커피를 준비 중...");
        coffeeHook.PrepareRecipe();
    }
}