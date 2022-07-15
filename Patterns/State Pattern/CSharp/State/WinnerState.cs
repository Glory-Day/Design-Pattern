using System;

namespace State
{
    public class WinnerState : State
    {
        private GumballMachine gumballMachine;

        public WinnerState(GumballMachine gumballMachine)
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
            if (gumballMachine.Count == 0) gumballMachine.State = gumballMachine.SoldOutState;
            else {
                gumballMachine.ReleaseBall();
                Console.WriteLine("축하드립니다! 알맹이를 하나 더 받으실 수 있습니다.");

                if (gumballMachine.Count > 0) gumballMachine.State = gumballMachine.NoQuarterState;
                else {
                    Console.WriteLine("더 이상 알맹이가 없습니다.");
                    gumballMachine.State = gumballMachine.SoldOutState;
                }
            }
        }
    }
}