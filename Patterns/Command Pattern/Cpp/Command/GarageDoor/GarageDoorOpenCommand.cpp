#include "../ICommand.cpp"
#include "./GarageDoor.cpp"

class GarageDoorOpenCommand : public ICommand {
private:
    GarageDoor* garageDoor;
    int preview;

public:
    GarageDoorOpenCommand(GarageDoor* garageDoor) : garageDoor{garageDoor}, preview{garageDoor->OFF} {}

    void execute() override {
        preview = garageDoor->getState();
        garageDoor->up();
        garageDoor->lightOn();
        garageDoor->stop();
    }

    void undo() override {
        if (preview == garageDoor->OFF) {
            garageDoor->down();
            garageDoor->lightOff();
            garageDoor->stop();
        }
    }

    string getCommandName() override {
        return "GarageDoorOpenCommand";
    }
};