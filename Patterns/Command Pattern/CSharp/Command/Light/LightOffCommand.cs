namespace Command.Light
{
    public class LightOffCommand : ICommand
    {
        private Light light;
        private int preview;

        public LightOffCommand(Light light)
        {
            preview = Light.OFF;
            this.light = light;
        }

        public void Execute()
        {
            preview = light.State;
            light.Off();
        }

        public void Undo()
        {
            if (preview == Light.ON)
            {
                light.On();
            }
        }
    }
}