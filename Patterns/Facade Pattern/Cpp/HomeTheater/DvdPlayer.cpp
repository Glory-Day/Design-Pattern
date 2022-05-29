#pragma once

#include <iostream>
#include <string>

using namespace std;

class DvdPlayer {
private:
    string description;
    int currentTrack;
    string movie;

public:
    DvdPlayer(string description) : description{description} {}
    
    void on() {
        cout << description << " on\n";
    }

    void off() {
        cout << description << " off\n";
    }

    void eject() {
        movie = "";
        cout << description << " eject\n";
    }

    void play(string movie) {
        this->movie = movie;
        currentTrack = 0;
        cout << description << " playing \"" << movie << "\"\n";
    }

    void play(int track) {
        if (movie.empty()) {
            cout << description << " can't play track " << currentTrack << ", no dvd inserted\n";
        }
        else {
            currentTrack = track;
            cout << description << " playing track " << currentTrack << " of \"" << movie << "\"\n";
        }
    }

    void stop() {
        currentTrack = 0;
        cout << description << " stopped \"" << movie << "\"\n";
    }

    void pause() {
        cout << description << " paused \"" << movie << "\"\n";
    }

    void setTwoChannelAudio() {
        cout << description << " set two channel audio\n";
    }

    void setSurroundAudio() {
        cout << description << "set surround audio\n";
    }

    string toString() {
        return description;
    }
};