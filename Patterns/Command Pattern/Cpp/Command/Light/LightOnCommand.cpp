#include "../ICommand.cpp"
#include "./Light.cpp"

class LightOnCommand : public ICommand {
private:
    Light* light;
    int preview;

public:
    LightOnCommand(Light* light) : light{light}, preview{light->OFF} {}

    void execute() override {
        preview = light->getState();
        light->on();
    }

    void undo() override {
        if (preview == light->OFF) light->off();
    }

    string getCommandName() override {
        return "LightOnCommand";
    }
};