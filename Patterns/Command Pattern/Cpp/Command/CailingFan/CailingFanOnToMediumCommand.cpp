#include "../ICommand.cpp"
#include "./CailingFan.cpp"

class CailingFanOnToMediumCommand : public ICommand {
private:
    CailingFan* cailingFan;
    int preview;

public:
    CailingFanOnToMediumCommand(CailingFan* cailingFan) : cailingFan{cailingFan}, preview{cailingFan->OFF} {}

    void execute() override {
        preview = cailingFan->getState();
        cailingFan->setMedium();
    }

    void undo() override {
        if (preview == cailingFan->HIGH) cailingFan->setHigh();
        else if (preview == cailingFan->MEDIUM) cailingFan->setMedium();
        else if (preview == cailingFan->OFF) cailingFan->off();
    }

    string getCommandName() override {
        return "CailingFanOnToMediumCommand";
    }
};