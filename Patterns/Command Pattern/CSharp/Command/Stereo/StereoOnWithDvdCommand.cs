namespace Command.Stereo
{
    public class StereoOnWithDvdCommand : ICommand
    {
        private Stereo stereo;
        private int preview;

        public StereoOnWithDvdCommand(Stereo stereo)
        {
            preview = Stereo.OFF;
            this.stereo = stereo;
        }

        public void Execute()
        {
            preview = stereo.State;
            stereo.On();
            stereo.SetDvd();
            stereo.SetVolumn(11);
        }

        public void Undo()
        {
            switch (preview)
            {
                case Stereo.CD:
                    stereo.SetCd();
                    break;
                case Stereo.RADIO:
                    stereo.SetRadio();
                    break;
                case Stereo.OFF:
                    stereo.Off();
                    break;
            }
        }
    }
}