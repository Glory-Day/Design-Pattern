namespace Command.CailingFan
{
    public class CailingFanOnToLowCommand : ICommand
    {
        private CailingFan cailingFan;
        private int preview;

        public CailingFanOnToLowCommand(CailingFan cailingFan)
        {
            preview = CailingFan.OFF;
            this.cailingFan = cailingFan;
        }

        public void Execute()
        {
            preview = cailingFan.State;
            cailingFan.SetLow();
        }

        public void Undo()
        {
            switch (preview)
            {
                case CailingFan.HIGH:
                    cailingFan.SetHigh();
                    break;
                case CailingFan.MEDIUM:
                    cailingFan.SetMedium();
                    break;
                case CailingFan.OFF:
                    cailingFan.Off();
                    break;
            }
        }
    }
}