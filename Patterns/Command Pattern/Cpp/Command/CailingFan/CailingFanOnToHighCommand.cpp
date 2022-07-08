#include "../ICommand.cpp"
#include "./CailingFan.cpp"

class CailingFanOnToHighCommand : public ICommand {
private:
    CailingFan* cailingFan;
    int preview;

public:
    CailingFanOnToHighCommand(CailingFan* cailingFan) : cailingFan{cailingFan}, preview{cailingFan->OFF} {}

    void execute() override {
        preview = cailingFan->getState();
        cailingFan->setHigh();
    }

    void undo() override {
        if (preview == cailingFan->MEDIUM) cailingFan->setMedium();
        else if (preview == cailingFan->LOW) cailingFan->setLow();
        else if (preview == cailingFan->OFF) cailingFan->off();
    }

    string getCommandName() override {
        return "CailingFanOnToHighCommand";
    }
};