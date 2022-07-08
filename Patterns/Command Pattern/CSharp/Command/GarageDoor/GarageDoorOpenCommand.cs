namespace Command.GarageDoor
{
    public class GarageDoorOpenCommand : ICommand
    {
        private GarageDoor garageDoor;
        private int preview;

        public GarageDoorOpenCommand(GarageDoor garageDoor)
        {
            preview = GarageDoor.OFF;
            this.garageDoor = garageDoor;
        }

        public void Execute()
        {
            preview = garageDoor.State;
            garageDoor.Down();
            garageDoor.LightOff();
            garageDoor.Stop();
        }

        public void Undo()
        {
            if (preview == GarageDoor.ON)
            {
                garageDoor.Up();
                garageDoor.LightOn();
                garageDoor.Stop();
            }
        }
    }
}