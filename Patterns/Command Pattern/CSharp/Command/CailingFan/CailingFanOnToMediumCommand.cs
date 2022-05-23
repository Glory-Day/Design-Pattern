namespace Command.CailingFan
{
    public class CailingFanOnToMediumCommand : ICommand
    {
        private CailingFan cailingFan;
        private int preview;

        public CailingFanOnToMediumCommand(CailingFan cailingFan)
        {
            preview = CailingFan.OFF;
            this.cailingFan = cailingFan;
        }

        public void Execute()
        {
            preview = cailingFan.State;
            cailingFan.SetMedium();
        }

        public void Undo()
        {
            switch (preview)
            {
                case CailingFan.HIGH:
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