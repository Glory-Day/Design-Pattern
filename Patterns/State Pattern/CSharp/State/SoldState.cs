using System;

namespace State
{
    public class SoldState : State
    {
        private GumballMachine gumballMachine;

        public SoldState(GumballMachine gumballMachine)
        {
            this.gumballMachine = gumballMachine;
        }

        public void InsertQuarter()
        {
            Console.WriteLine("알맹이를 내보내고 있습니다.");
        }

        public void EjectQuarter()
        {
            Console.WriteLine("이미 알맹이를 뽑으셨습니다.");
        }

        public void TurnCrank()
        {
            Console.WriteLine("손잡이는 한번만 돌려주세요.");
        }

        public void Dispence()
        {
            gumballMachine.ReleaseBall();
            if (gumballMachine.Count > 0) gumballMachine.State = gumballMachine.NoQuarterState;
            else gumballMachine.State = gumballMachine.SoldOutState;
        }
    }
}