#pragma once

#include <iostream>
#include <vector>

#include "./ICommand.cpp"

using namespace std;

class MacroCommand : public ICommand {
private:
    vector<ICommand*> commands;

public:
    MacroCommand(vector<ICommand*> commands) : commands{commands} {}

    void execute() override {
        for (auto command: commands) command->execute();
    }

    void undo() override {
        for (auto command: commands) command->undo();
    };

    string getCommandName() override {
        string name = "Macro Command : ";
        for (auto command: commands) {
            name += command->getCommandName();
            name += " ";
        }

        return name;
    }
};