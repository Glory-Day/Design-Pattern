namespace Command.Stereo
{
    public class StereoOnWithRadioCommand : ICommand
    {
        private Stereo stereo;
        private int preview;

        public StereoOnWithRadioCommand(Stereo stereo)
        {
            preview = Stereo.OFF;
            this.stereo = stereo;
        }

        public void Execute()
        {
            preview = stereo.State;
            stereo.On();
            stereo.SetRadio();
            stereo.SetVolumn(11);
        }

        public void Undo()
        {
            switch (preview)
            {
                case Stereo.CD:
                    stereo.SetCd();
                    break;
                case Stereo.DVD:
                    stereo.SetDvd();
                    break;
                case Stereo.OFF:
                    stereo.Off();
                    break;
            }
        }
    }
}