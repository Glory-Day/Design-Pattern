namespace Command.CailingFan
{
    public class CailingFanOnToHighCommand : ICommand
    {
        private CailingFan cailingFan;
        private int preview;

        public CailingFanOnToHighCommand(CailingFan cailingFan)
        {
            preview = CailingFan.OFF;
            this.cailingFan = cailingFan;
        }

        public void Execute()
        {
            preview = cailingFan.State;
            cailingFan.SetHigh();
        }

        public void Undo()
        {
            switch (preview)
            {
                case CailingFan.MEDIUM:
                    cailingFan.SetHigh();
                    break;
                case CailingFan.LOW:
                    cailingFan.SetLow();
                    break;
                case CailingFan.OFF:
                    cailingFan.Off();
                    break;
            }
        }
    }
}