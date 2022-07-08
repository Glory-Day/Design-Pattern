#include "../ICommand.cpp"
#include "./Stereo.cpp"

class StereoOnWithRadioCommand : public ICommand {
private:
    Stereo* stereo;
    int preview;

public:
    StereoOnWithRadioCommand(Stereo* stereo) : stereo{stereo}, preview{stereo->OFF} {}

    void execute() override {
        preview = stereo->getState();
        stereo->on();
        stereo->setRadio();
        stereo->setVolumn(11);
    }

    void undo() override {
        if (preview == stereo->CD) stereo->setCd();
        else if (preview == stereo->DVD) stereo->setDvd();
        else if (preview == stereo->OFF) stereo->off();
    }

    string getCommandName() override {
        return "StereoOnWithRadioCommand";
    }
};