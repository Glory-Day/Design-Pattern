namespace Command.Stereo
{
    public class StereoOnWithCdCommand : ICommand
    {
        private Stereo stereo;
        private int preview;

        public StereoOnWithCdCommand(Stereo stereo)
        {
            preview = Stereo.OFF;
            this.stereo = stereo;
        }

        public void Execute()
        {
            preview = stereo.State;
            stereo.On();
            stereo.SetCd();
            stereo.SetVolumn(11);
        }

        public void Undo()
        {
            switch (preview)
            {
                case Stereo.DVD:
                    stereo.SetDvd();
                    break;
                case Stereo.RADIO:
                    stereo.SetDvd();
                    break;
                case Stereo.OFF:
                    stereo.Off();
                    break;
            }
        }
    }
}