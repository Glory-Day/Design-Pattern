#include "../ICommand.cpp"
#include "./CailingFan.cpp"

class CailingFanOnToLowCommand : public ICommand {
private:
    CailingFan* cailingFan;
    int preview;

public:
    CailingFanOnToLowCommand(CailingFan* cailingFan) : cailingFan{cailingFan}, preview{cailingFan->OFF} {}

    void execute() override {
        preview = cailingFan->getState();
        cailingFan->setLow();
    }

    void undo() override {
        if (preview == cailingFan->HIGH) cailingFan->setHigh();
        else if (preview == cailingFan->LOW) cailingFan->setLow();
        else if (preview == cailingFan->OFF) cailingFan->off();
    }

    string getCommandName() override {
        return "CailingFanOnToLowCommand";
    }
};