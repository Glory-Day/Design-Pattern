#pragma once

#include <iostream>

#include "./ICommand.cpp"

using namespace std;

class NoCommand : public ICommand {
public:
    void execute() override {}

    void undo() override {};

    string getCommandName() override {
        return "NoCommand";
    }
};