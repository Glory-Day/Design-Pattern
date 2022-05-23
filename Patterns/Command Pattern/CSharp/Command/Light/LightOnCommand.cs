namespace Command.Light
{
    public class LightOnCommand : ICommand
    {
        private Light light;
        private int preview;

        public LightOnCommand(Light light)
        {
            preview = Light.OFF;
            this.light = light;
        }

        public void Execute()
        {
            preview = light.State;
            light.On();
        }

        public void Undo()
        {
            if (preview == Light.OFF)
            {
                light.Off();
            }
        }
    }
}