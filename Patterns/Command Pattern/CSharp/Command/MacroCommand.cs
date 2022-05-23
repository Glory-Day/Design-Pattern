namespace Command
{
    public class MacroCommand : ICommand
    {
        private ICommand[] commands;

        public MacroCommand(ICommand[] commands)
        {
            this.commands = commands;
        }

        public void Execute()
        {
            foreach (var command in commands)
            {
                command.Execute();
            }
        }

        public void Undo()
        {
            foreach (var command in commands)
            {
                command.Undo();
            }
        }
    }
}