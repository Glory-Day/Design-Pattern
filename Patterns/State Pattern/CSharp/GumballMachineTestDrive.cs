public class GumballMachineTestDrive
{
    public static void Main(string[] args)
    {
        GumballMachine gumballMachine = new GumballMachine(5);

        gumballMachine.Print();

        gumballMachine.InsertQuarter();
        gumballMachine.TurnCrank();

        gumballMachine.Print();

        gumballMachine.InsertQuarter();
        gumballMachine.TurnCrank();
        gumballMachine.InsertQuarter();
        gumballMachine.TurnCrank();

        gumballMachine.Print();
    }
}
