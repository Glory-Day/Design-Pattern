using System;

using ICommand = Command.ICommand;
using NoCommand = Command.NoCommand;

public class RemoteControl
{
    private ICommand[] onCommands;
    private ICommand[] offCommands;
    private ICommand undoCommand;

    public RemoteControl()
    {
        onCommands = new ICommand[7];
        offCommands = new ICommand[7];

        ICommand noCommand = new NoCommand();
        for (var i = 0; i < 7; i++)
        {
            onCommands[i] = offCommands[i] = noCommand;
        }
        undoCommand = noCommand;
    }

    public void SetCommand(int slot, ICommand onCommand, ICommand offCommand)
    {
        onCommands[slot] = onCommand;
        offCommands[slot] = offCommand;
    }

    public void OnButtonWasPushed(int slot)
    {
        onCommands[slot].Execute();
        undoCommand = onCommands[slot];
    }

    public void OffButtonWasPushed(int slot)
    {
        offCommands[slot].Execute();
        undoCommand = offCommands[slot];
    }

    public void UndoWasPushed() => undoCommand.Undo();

    public void Print()
    {
        Console.WriteLine("\n------ 리모컨 ------");
        for (var i = 0; i < 7; i++)
        {
            Console.WriteLine($"[slot {i}] {onCommands[i].GetType().Name} {offCommands[i].GetType().Name}");
        }
        Console.WriteLine($"[undo] {undoCommand.GetType().Name}\n");
    }
}