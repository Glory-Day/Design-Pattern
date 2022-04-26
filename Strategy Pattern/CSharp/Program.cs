using System;

using Duck;

public class Program {
    public static void Main(string[] args) {
        Duck.Duck mallardDuck = new Duck.MallardDuck();

        mallardDuck.display();

        mallardDuck.swim();

        mallardDuck.performFly();
        mallardDuck.performQuack();
    }
}
