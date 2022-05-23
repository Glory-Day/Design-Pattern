namespace Command.CailingFan
{
    public class CailingFanOffCommand : ICommand
    {
        private CailingFan cailingFan;
        private int preview;

        public CailingFanOffCommand(CailingFan cailingFan)
        {
            preview = CailingFan.OFF;
            this.cailingFan = cailingFan;
        }

        public void Execute()
        {
            preview = cailingFan.State;
            cailingFan.Off();
        }

        public void Undo()
        {
            switch (preview)
            {
                case CailingFan.HIGH:
                    cailingFan.SetHigh();
                    break;
                case CailingFan.MEDIUM:
                    cailingFan.SetHigh();
                    break;
                case CailingFan.LOW:
                    cailingFan.SetHigh();
                    break;
            }
        }
    }
}