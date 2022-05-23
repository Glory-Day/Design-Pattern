using System;

using Command;

using CailingFan = Command.CailingFan;
using Light = Command.Light;
using GarageDoor = Command.GarageDoor;
using Stereo = Command.Stereo;

public class RemoteLoader
{
    public static void Main(string[] args)
    {
        RemoteControl remoteControl = new RemoteControl();

        CailingFan.CailingFan cailingFan = new Command.CailingFan.CailingFan("거실");
        Light.Light light = new Command.Light.Light("부엌");
        GarageDoor.GarageDoor garageDoor = new Command.GarageDoor.GarageDoor();
        Stereo.Stereo stereo = new Command.Stereo.Stereo("침실");

        Light.Light lightA = new Command.Light.Light("객실 A");
        Light.Light lightB = new Command.Light.Light("객실 B");
        Light.Light lightC = new Command.Light.Light("객실 C");
        Light.LightOnCommand lightOnCommandA = new Light.LightOnCommand(lightA);
        Light.LightOffCommand lightOffCommandA = new Light.LightOffCommand(lightA);
        Light.LightOnCommand lightOnCommandB = new Light.LightOnCommand(lightB);
        Light.LightOffCommand lightOffCommandB = new Light.LightOffCommand(lightB);
        Light.LightOnCommand lightOnCommandC = new Light.LightOnCommand(lightC);
        Light.LightOffCommand lightOffCommandC = new Light.LightOffCommand(lightC);

        ICommand[] onCommands = new [] { lightOnCommandA,lightOnCommandB,lightOnCommandC };
        ICommand[] offCommands = new [] { lightOffCommandA,lightOffCommandB,lightOffCommandC };
        MacroCommand onMacroCommand = new MacroCommand(onCommands);
        MacroCommand offMacroCommand = new MacroCommand(offCommands);

        CailingFan.CailingFanOnToHighCommand cailingFanOnToHighCommand = new CailingFan.CailingFanOnToHighCommand(cailingFan);
        CailingFan.CailingFanOnToMediumCommand cailingFanOnToMediumCommand = new CailingFan.CailingFanOnToMediumCommand(cailingFan);
        CailingFan.CailingFanOnToLowCommand cailingFanOnToLowCommand = new CailingFan.CailingFanOnToLowCommand(cailingFan);
        CailingFan.CailingFanOffCommand cailingFanOffCommand = new CailingFan.CailingFanOffCommand(cailingFan);

        Light.LightOnCommand lightOnCommand = new Light.LightOnCommand(light);
        Light.LightOffCommand lightOffCommand = new Light.LightOffCommand(light);

        GarageDoor.GarageDoorOpenCommand garageDoorOpenCommand = new GarageDoor.GarageDoorOpenCommand(garageDoor);
        GarageDoor.GarageDoorCloseCommand garageDoorCloseCommand = new GarageDoor.GarageDoorCloseCommand(garageDoor);

        Stereo.StereoOnWithCdCommand stereoOnWithCdCommand = new Stereo.StereoOnWithCdCommand(stereo);
        Stereo.StereoOffCommand stereoOffCommand = new Stereo.StereoOffCommand(stereo);

        remoteControl.SetCommand(0, lightOnCommand, lightOffCommand);
        remoteControl.SetCommand(1, garageDoorOpenCommand, garageDoorCloseCommand);
        remoteControl.SetCommand(2, stereoOnWithCdCommand, stereoOffCommand);
        remoteControl.SetCommand(3, cailingFanOnToHighCommand, cailingFanOffCommand);
        remoteControl.SetCommand(4, cailingFanOnToMediumCommand, cailingFanOffCommand);
        remoteControl.SetCommand(5, cailingFanOnToLowCommand, cailingFanOffCommand);
        remoteControl.SetCommand(6, onMacroCommand, offMacroCommand);

        remoteControl.Print();

        remoteControl.OnButtonWasPushed(0);
        remoteControl.OffButtonWasPushed(0);
        remoteControl.OnButtonWasPushed(1);
        remoteControl.OffButtonWasPushed(1);
        remoteControl.OnButtonWasPushed(2);
        remoteControl.OffButtonWasPushed(2);

        remoteControl.OnButtonWasPushed(3);
        remoteControl.OnButtonWasPushed(4);

        remoteControl.Print();

        remoteControl.UndoWasPushed();

        Console.WriteLine("\n--- 매크로 On ---");
        remoteControl.OnButtonWasPushed(6);

        Console.WriteLine("\n--- 매크로 Off ---");
        remoteControl.OffButtonWasPushed(6);

        Console.WriteLine("\n--- 매크로 Undo ---");
        remoteControl.UndoWasPushed();
    }
}