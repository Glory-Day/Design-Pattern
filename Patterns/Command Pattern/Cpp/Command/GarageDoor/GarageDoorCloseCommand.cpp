#include "../ICommand.cpp"
#include "./GarageDoor.cpp"

class GarageDoorCloseCommand : public ICommand {
private:
    GarageDoor* garageDoor;
    int preview;

public:
    GarageDoorCloseCommand(GarageDoor* garageDoor) : garageDoor{garageDoor}, preview{garageDoor->OFF} {}

    void execute() override {
        preview = garageDoor->getState();
        garageDoor->down();
        garageDoor->lightOff();
        garageDoor->stop();
    }

    void undo() override {
        if (preview == garageDoor->ON) {
            garageDoor->up();
            garageDoor->lightOn();
            garageDoor->stop();
        }
    }

    string getCommandName() override {
        return "GarageDoorCloseCommand";
    }
};