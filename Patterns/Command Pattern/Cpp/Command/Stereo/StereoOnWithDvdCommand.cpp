#include "../ICommand.cpp"
#include "./Stereo.cpp"

class StereoOnWithDvdCommand : public ICommand {
private:
    Stereo* stereo;
    int preview;

public:
    StereoOnWithDvdCommand(Stereo* stereo) : stereo{stereo}, preview{stereo->OFF} {}

    void execute() override {
        preview = stereo->getState();
        stereo->on();
        stereo->setDvd();
        stereo->setVolumn(11);
    }

    void undo() override {
        if (preview == stereo->CD) stereo->setCd();
        else if (preview == stereo->RADIO) stereo->setRadio();
        else if (preview == stereo->OFF) stereo->off();
    }

    string getCommandName() override {
        return "StereoOnWithDvdCommand";
    }
};