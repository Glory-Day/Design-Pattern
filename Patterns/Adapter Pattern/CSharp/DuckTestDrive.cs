using System;

using Duck;
using Turkey;

public class DuckTestDrive
{
    public static void TestDuck(Duck.Duck duck)
    {
        duck.Quack();
        duck.Fly();
    }

    public static void Main(string[] args)
    {
        Duck.Duck duck = new Duck.MallardDuck();

        Turkey.Turkey turkey = new Turkey.WildTurkey();
        Duck.Duck turkeyAdapter = new Turkey.TurkeyAdapter(turkey);

        Console.WriteLine("칠면조가 말하길");
        turkey.Gobble();
        turkey.Fly();

        Console.WriteLine("\n오리가 말하길");
        TestDuck(duck);

        Console.WriteLine("\n칠면조 어뎁터가 말하길");
        TestDuck(turkeyAdapter);
    }
}
