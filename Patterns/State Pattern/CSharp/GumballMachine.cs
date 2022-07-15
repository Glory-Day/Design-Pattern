using State;

public class GumballMachine
{
    public State.State SoldOutState { get; private set; }
    public State.State NoQuarterState { get; private set; }
    public State.State HasQuarterState { get; private set; }
    public State.State SoldState { get; private set; }
    public State.State WinnerState { get; private set; }

    public State.State State { get; set; }
    public int Count { get; private set; }

    public GumballMachine(int numberGumballs) 
    {
        NoQuarterState = new NoQuarterState(this);
        HasQuarterState = new HasQuarterState(this);
        SoldState = new SoldState(this);
        SoldOutState = new SoldOutState(this);
        WinnerState = new WinnerState(this);

        if (numberGumballs > 0) State = NoQuarterState;
        else State = SoldOutState;

        Count = numberGumballs;
    }

    public void InsertQuarter() => State.InsertQuarter();

    public void EjectQuarter() => State.EjectQuarter();

    public void TurnCrank()
    {
        State.TurnCrank();
        State.Dispence();
    }

    public void ReleaseBall() 
    {
        Console.WriteLine("알맹이를 내보내고 있습니다.");
        if (Count > 0) Count--;
    }

    public void Print()
    {
        Console.WriteLine("\n주식회사 왕뽑기");
        Console.WriteLine("C#로 돌아가는 최신형 뽑기 기계");
        Console.WriteLine($"남은 개수: {Count}개");

        if (Count > 0) Console.WriteLine("동전 투입 대기 중\n");
        else Console.WriteLine("매진\n");
    }
}