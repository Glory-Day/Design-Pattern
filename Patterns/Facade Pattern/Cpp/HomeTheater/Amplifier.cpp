#pragma once

#include <iostream>
#include <string>

#include "./CdPlayer.cpp"
#include "./DvdPlayer.cpp"
#include "./Tuner.cpp"

class Amplifier {
private:
    string description;
    Tuner* tuner;
    DvdPlayer* dvd;
    CdPlayer* cd;

public:
    Amplifier(string description) : description{description} {}

    void on() {
        cout << description << " on\n";
    }

    void off() {
        cout << description << " off\n";
    }

    void setStereoSound() {
        cout << description << " stereo mode on\n";
    }

    void setSurroundSound() {
        cout << description << " surround sound on (5 speaker, 1 subwoofer)\n";
    }

    void setVolumn(int level) {
        cout << description << " setting volumn to " << level << "\n";
    }

    void setTuner(Tuner* tuner) {
        this->tuner = tuner;
        cout << description << " setting tuner to " << tuner->toString() << "\n";
    }

    void setCd(CdPlayer* cd) {
        this->cd = cd;
        cout << description << " setting cd to " << cd->toString() << "\n";
    }

    void setDvd(DvdPlayer* dvd) {
        this->dvd = dvd;
        cout << description << " setting dvd to " << dvd->toString() << "\n";
    }

    string toString() {
        return description;
    }
};