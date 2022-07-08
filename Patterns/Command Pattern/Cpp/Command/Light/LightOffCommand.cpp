#include "../ICommand.cpp"
#include "./Light.cpp"

class LightOffCommand : public ICommand {
private:
    Light* light;
    int preview;

public:
    LightOffCommand(Light* light) : light{light}, preview{light->OFF} {}

    void execute() override {
        preview = light->getState();
        light->off();
    }

    void undo() override {
        if (preview == light->ON) light->on();
    }

    string getCommandName() override {
        return "LightOffCommand";
    }
};