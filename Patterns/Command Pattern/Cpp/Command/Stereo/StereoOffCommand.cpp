#include "../ICommand.cpp"
#include "./Stereo.cpp"

class StereoOffCommand : public ICommand {
private:
    Stereo* stereo;
    int preview;

public:
    StereoOffCommand(Stereo* stereo) : stereo{stereo}, preview{stereo->OFF} {}

    void execute() override {
        preview = stereo->getState();
        stereo->off();
    }

    void undo() override {
        if (preview == stereo->CD) {
            stereo->on();
            stereo->setCd();
            stereo->setVolumn(11);
        }
        else if (preview == stereo->DVD) {
            stereo->on();
            stereo->setDvd();
            stereo->setVolumn(11);
        }
        else if (preview == stereo->RADIO) {
            stereo->on();
            stereo->setRadio();
            stereo->setVolumn(11);
        }
    }

    string getCommandName() override {
        return "StereoOffCommand";
    }
};