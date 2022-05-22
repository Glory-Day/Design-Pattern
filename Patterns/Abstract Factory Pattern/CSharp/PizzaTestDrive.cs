using System;

public class PizzaTestDrive
{
    public static void Main(string[] args)
    {
        PizzaStore.PizzaStore nyStore = new PizzaStore.NYPizzaStore();
        PizzaStore.PizzaStore chicagoStore = new PizzaStore.ChicagoPizzaStore();

        Pizza.Pizza? pizza = nyStore.OrderPizza("cheese");
        Console.WriteLine($"에단이 주문한 {pizza?.Name}\n");

        pizza = chicagoStore.OrderPizza("cheese");
        Console.WriteLine($"조엘이 주문한 {pizza?.Name}");
    }
}
