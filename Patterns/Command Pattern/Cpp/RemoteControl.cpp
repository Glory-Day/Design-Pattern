#pragma once

#include <iostream>
#include <vector>
#include <typeinfo>

#include "./Command/ICommand.cpp"
#include "./Command/NoCommand.cpp"

using namespace std;

class RemoteControl {
private:
    vector<ICommand*> onCommands;
    vector<ICommand*> offCommands;
    ICommand* undoCommand;

public:
    RemoteControl() {
        onCommands = vector<ICommand*>(7);
        offCommands = vector<ICommand*>(7);

        ICommand* noCommand = new NoCommand();
        for (int i = 0; i < 7; i++) {
            onCommands[i] = offCommands[i] = noCommand;
        }
        undoCommand = noCommand;
    }

    void setCommand(int slot, ICommand* onCommand, ICommand* offCommand) {
        onCommands[slot] = onCommand;
        offCommands[slot] = offCommand;
    }

    void onButtonWasPushed(int slot) {
        onCommands[slot]->execute();
        undoCommand = onCommands[slot];
    }

    void offButtonWasPushed(int slot) {
        offCommands[slot]->execute();
        undoCommand = offCommands[slot];
    }

    void undoWasPushed() {
        undoCommand->undo();
    }

    void print() {
        cout << "\n------ 리모컨 ------\n";
        for (int i = 0; i < onCommands.size(); i++) {
            cout << "[slot " << i << "] " << onCommands[i]->getCommandName() << ' ' << offCommands[i]->getCommandName() << '\n';
        }
        cout << "[undo] " << undoCommand->getCommandName() << '\n';
        cout << '\n';
    }
};