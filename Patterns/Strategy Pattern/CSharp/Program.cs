using System;

using Duck;

public class Program {
    public static void Main(string[] args) {
        Duck.Duck mallardDuck = new Duck.MallardDuck();

        mallardDuck.OnDisplay();

        mallardDuck.Swim();

        mallardDuck.PerformFly();
        mallardDuck.PerformQuack();
    }
}
