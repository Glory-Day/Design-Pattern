using System;

namespace State
{
    public class SoldOutState : State
    {
        private GumballMachine gumballMachine;

        public SoldOutState(GumballMachine gumballMachine)
        {
            this.gumballMachine = gumballMachine;
        }

        public void InsertQuarter()
        {
            Console.WriteLine("죄송합니다. 매진되었습니다.");
        }

        public void EjectQuarter()
        {
            Console.WriteLine("동전을 반환할 수 없습니다. 동전을 넣지 않았습니다.");
        }

        public void TurnCrank()
        {
            Console.WriteLine("죄송합니다. 매진되었습니다.");
        }

        public void Dispence()
        {
            Console.WriteLine("알맹이를 내보낼 수 없습니다.");
        }
    }
}