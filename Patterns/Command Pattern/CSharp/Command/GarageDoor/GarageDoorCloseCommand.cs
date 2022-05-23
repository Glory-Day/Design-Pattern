namespace Command.GarageDoor
{
    public class GarageDoorCloseCommand : ICommand
    {
        private GarageDoor garageDoor;
        private int preview;

        public GarageDoorCloseCommand(GarageDoor garageDoor)
        {
            preview = GarageDoor.OFF;
            this.garageDoor = garageDoor;
        }

        public void Execute()
        {
            preview = garageDoor.State;
            garageDoor.Up();
            garageDoor.LightOn();
            garageDoor.Stop();
        }

        public void Undo()
        {
            if (preview == GarageDoor.ON)
            {
                garageDoor.Down();
                garageDoor.LightOff();
                garageDoor.Stop();
            }
        }
    }
}