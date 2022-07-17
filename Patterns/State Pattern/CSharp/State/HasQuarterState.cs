using System;
using System.Collections.Generic;

namespace State
{
    public class HasQuarterState : State
    {
        private Random random;
        private GumballMachine gumballMachine;

        public HasQuarterState(GumballMachine gumballMachine)
        {
            random = new Random();
            this.gumballMachine = gumballMachine;
        }

        public void InsertQuarter()
        {
            Console.WriteLine("동전은 한개만 넣어주세요.");
        }

        public void EjectQuarter()
        {
            Console.WriteLine("동전이 반환됩니다.");
            gumballMachine.State = gumballMachine.NoQuarterState;
        }

        public void TurnCrank()
        {
            Console.WriteLine("손잡이를 돌리셨습니다.");
            var winner = random.Next(10);
            if (winner == 0 && gumballMachine.Count > 1) gumballMachine.State = gumballMachine.WinnerState;
            else gumballMachine.State = gumballMachine.SoldOutState;
            gumballMachine.State = gumballMachine.SoldState;
        }

        public void Dispence()
        {
            Console.WriteLine("알맹이를 내보낼 수 없습니다.");
        }
    }
}