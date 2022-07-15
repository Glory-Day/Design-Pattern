using System;

namespace State
{
    public class NoQuarterState : State
    {
        private GumballMachine gumballMachine;

        public NoQuarterState(GumballMachine gumballMachine)
        {
            this.gumballMachine = gumballMachine;
        }

        public void InsertQuarter()
        {
            Console.WriteLine("동전을 넣었습니다.");
            gumballMachine.State = gumballMachine.HasQuarterState;
        }

        public void EjectQuarter()
        {
            Console.WriteLine("동전을 넣어주세요.");
        }

        public void TurnCrank()
        {
            Console.WriteLine("동전을 넣어주세요.");
        }

        public void Dispence()
        {
            Console.WriteLine("동전을 넣어주세요.");
        }
    }
}