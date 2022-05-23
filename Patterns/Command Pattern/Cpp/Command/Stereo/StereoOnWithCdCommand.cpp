#include "../ICommand.cpp"
#include "./Stereo.cpp"

class StereoOnWithCdCommand : public ICommand {
private:
    Stereo* stereo;
    int preview;

public:
    StereoOnWithCdCommand(Stereo* stereo) : stereo{stereo}, preview{stereo->OFF} {}

    void execute() override {
        preview = stereo->getState();
        stereo->on();
        stereo->setCd();
        stereo->setVolumn(11);
    }

    void undo() override {
        if (preview == stereo->DVD) stereo->setDvd();
        else if (preview == stereo->RADIO) stereo->setRadio();
        else if (preview == stereo->OFF) stereo->off();
    }

    string getCommandName() override {
        return "StereoOnWithCdCommand";
    }
};