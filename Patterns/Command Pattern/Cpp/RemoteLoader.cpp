#include "./RemoteControl.cpp"

#include "./Command/CailingFan/CailingFan.cpp"
#include "./Command/CailingFan/CailingFanOffCommand.cpp"
#include "./Command/CailingFan/CailingFanOnToHighCommand.cpp"
#include "./Command/CailingFan/CailingFanOnToMediumCommand.cpp"
#include "./Command/CailingFan/CailingFanOnToLowCommand.cpp"

#include "./Command/Light/Light.cpp"
#include "./Command/Light/LightOnCommand.cpp"
#include "./Command/Light/LightOffCommand.cpp"

#include "./Command/GarageDoor/GarageDoor.cpp"
#include "./Command/GarageDoor/GarageDoorOpenCommand.cpp"
#include "./Command/GarageDoor/GarageDoorCloseCommand.cpp"

#include "./Command/Stereo/Stereo.cpp"
#include "./Command/Stereo/StereoOffCommand.cpp"
#include "./Command/Stereo/StereoOnWithCdCommand.cpp"

#include "./Command/MacroCommand.cpp"

int main() {
    RemoteControl* remoteControl = new RemoteControl();

    CailingFan* cailingFan = new CailingFan("거실");
    Light* light = new Light("부엌");
    GarageDoor* garageDoor = new GarageDoor();
    Stereo* stereo = new Stereo("침실");

    Light* lightA = new Light("객실 A");
    Light* lightB = new Light("객실 B");
    Light* lightC = new Light("객실 C");
    LightOnCommand* lightOnCommandA = new LightOnCommand(lightA);
    LightOffCommand* lightOffCommandA = new LightOffCommand(lightA);
    LightOnCommand* lightOnCommandB = new LightOnCommand(lightB);
    LightOffCommand* lightOffCommandB = new LightOffCommand(lightB);
    LightOnCommand* lightOnCommandC = new LightOnCommand(lightC);
    LightOffCommand* lightOffCommandC = new LightOffCommand(lightC);

    vector<ICommand*> onCommands = { lightOnCommandA,lightOnCommandB,lightOnCommandC };
    vector<ICommand*> offCommands = { lightOffCommandA,lightOffCommandB,lightOffCommandC };
    MacroCommand* onMacroCommand = new MacroCommand(onCommands);
    MacroCommand* offMacroCommand = new MacroCommand(offCommands);

    CailingFanOnToHighCommand* cailingFanOnToHighCommand = new CailingFanOnToHighCommand(cailingFan);
    CailingFanOnToMediumCommand* cailingFanOnToMediumCommand = new CailingFanOnToMediumCommand(cailingFan);
    CailingFanOnToLowCommand* cailingFanOnToLowCommand = new CailingFanOnToLowCommand(cailingFan);
    CailingFanOffCommand* cailingFanOffCommand = new CailingFanOffCommand(cailingFan);

    LightOnCommand* lightOnCommand = new LightOnCommand(light);
    LightOffCommand* lightOffCommand = new LightOffCommand(light);

    GarageDoorOpenCommand* garageDoorOpenCommand = new GarageDoorOpenCommand(garageDoor);
    GarageDoorCloseCommand* garageDoorCloseCommand = new GarageDoorCloseCommand(garageDoor);

    StereoOnWithCdCommand* stereoOnWithCdCommand = new StereoOnWithCdCommand(stereo);
    StereoOffCommand* stereoOffCommand = new StereoOffCommand(stereo);

    remoteControl->setCommand(0, lightOnCommand, lightOffCommand);
    remoteControl->setCommand(1, garageDoorOpenCommand, garageDoorCloseCommand);
    remoteControl->setCommand(2, stereoOnWithCdCommand, stereoOffCommand);
    remoteControl->setCommand(3, cailingFanOnToHighCommand, cailingFanOffCommand);
    remoteControl->setCommand(4, cailingFanOnToMediumCommand, cailingFanOffCommand);
    remoteControl->setCommand(5, cailingFanOnToLowCommand, cailingFanOffCommand);
    remoteControl->setCommand(6, onMacroCommand, offMacroCommand);

    remoteControl->print();

    remoteControl->onButtonWasPushed(0);
    remoteControl->offButtonWasPushed(0);
    remoteControl->onButtonWasPushed(1);
    remoteControl->offButtonWasPushed(1);
    remoteControl->onButtonWasPushed(2);
    remoteControl->offButtonWasPushed(2);

    remoteControl->onButtonWasPushed(3);
    remoteControl->onButtonWasPushed(4);

    remoteControl->print();

    remoteControl->undoWasPushed();

    cout << "\n--- 매크로 On ---\n";
    remoteControl->onButtonWasPushed(6);

    cout << "\n--- 매크로 Off ---\n";
    remoteControl->offButtonWasPushed(6);

    cout << "\n--- 매크로 Undo ---\n";
    remoteControl->undoWasPushed();
}