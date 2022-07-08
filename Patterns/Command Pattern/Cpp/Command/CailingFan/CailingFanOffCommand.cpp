#include "../ICommand.cpp"
#include "./CailingFan.cpp"

class CailingFanOffCommand : public ICommand {
private:
    CailingFan* cailingFan;
    int preview;

public:
    CailingFanOffCommand(CailingFan* cailingFan) : cailingFan{cailingFan}, preview{cailingFan->OFF} {}

    void execute() override {
        preview = cailingFan->getState();
        cailingFan->off();
    }

    void undo() override {
        if (preview == cailingFan->HIGH) cailingFan->setHigh();
        else if (preview == cailingFan->MEDIUM) cailingFan->setMedium();
        else if (preview == cailingFan->LOW) cailingFan->setLow();
    }

    string getCommandName() override {
        return "CailingFanOffCommand";
    }
};