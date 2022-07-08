#pragma once

#include <string>

#define interface class

using namespace std;

interface ICommand {
public:
    virtual void execute() = 0;
    virtual void undo() = 0;
    virtual string getCommandName() = 0;
};