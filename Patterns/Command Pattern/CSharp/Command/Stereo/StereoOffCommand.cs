namespace Command.Stereo
{
    public class StereoOffCommand : ICommand
    {
        private Stereo stereo;
        private int preview;

        public StereoOffCommand(Stereo stereo)
        {
            preview = Stereo.OFF;
            this.stereo = stereo;
        }

        public void Execute()
        {
            preview = stereo.State;
            stereo.Off();
        }

        public void Undo()
        {
            switch (preview)
            {
                case Stereo.CD:
                    stereo.On();
                    stereo.SetCd();
                    stereo.SetVolumn(11);
                    break;
                case Stereo.DVD:
                    stereo.On();
                    stereo.SetDvd();
                    stereo.SetVolumn(11);
                    break;
                case Stereo.RADIO:
                    stereo.On();
                    stereo.SetRadio();
                    stereo.SetVolumn(11);
                    break;
            }
        }
    }
}