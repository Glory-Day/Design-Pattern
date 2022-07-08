#pragma once

#include <iostream>
#include <string>

using namespace std;

class CdPlayer {
private:
    string description;
    int currentTrack;
    string title;

public:
    CdPlayer(string description) : description{description} {}
    
    void on() {
        cout << description << " on\n";
    }

    void off() {
        cout << description << " off\n";
    }

    void eject() {
        title = "";
        cout << description << " eject\n";
    }

    void play(string title) {
        this->title = title;
        currentTrack = 0;
        cout << description << " playing \"" << title << "\"\n";
    }

    void play(int track) {
        if (title.empty()) {
            cout << description << " can't play track " << currentTrack << ", no cd inserted\n";
        }
        else {
            currentTrack = track;
            cout << description << " playing track " << currentTrack << "\n";
        }
    }

    void stop() {
        currentTrack = 0;
        cout << description << " stopped\n";
    }

    void pause() {
        cout << description << " paused \"" << title << "\"\n";
    }

    string toString() {
        return description;
    }
};