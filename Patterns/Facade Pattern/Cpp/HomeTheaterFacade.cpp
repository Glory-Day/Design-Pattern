#pragma once

#include <iostream>
#include <string>

#include "./HomeTheater/Amplifier.cpp"
#include "./HomeTheater/CdPlayer.cpp"
#include "./HomeTheater/DvdPlayer.cpp"
#include "./HomeTheater/PopcornPopper.cpp"
#include "./HomeTheater/Projector.cpp"
#include "./HomeTheater/Screen.cpp"
#include "./HomeTheater/TheaterLights.cpp"
#include "./HomeTheater/Tuner.cpp"

using namespace std;

class HomeTheaterFacade {
private:
    Amplifier* amp;
    DvdPlayer* dvd;
    CdPlayer* cd;
    Projector* projector;
    PopcornPopper* popper;
    Screen* screen;
    TheaterLights* lights;
    Tuner* tuner;

public:
    HomeTheaterFacade(Amplifier* amp, DvdPlayer* dvd, CdPlayer* cd, Projector* projector, PopcornPopper* popper, Screen* screen, TheaterLights* lights, Tuner* tuner) :
        amp{amp}, dvd{dvd}, cd{cd}, projector{projector}, popper{popper}, screen{screen}, lights{lights}, tuner{tuner} {}
    
    void watchMovie(string movie) {
        cout << "Get ready to watch a movie...\n";
        popper->on();
        popper->pop();
        lights->dim(10);
        screen->down();
        projector->on();
        projector->wideScreenMode();
        amp->on();
        amp->setDvd(dvd);
        amp->setSurroundSound();
        amp->setVolumn(5);
        dvd->on();
        dvd->play(movie);
    }

    void endMovie() {
        cout << "Shutting movie theater down...\n";
        popper->off();
		lights->on();
		screen->up();
		projector->off();
		amp->off();
		dvd->stop();
		dvd->eject();
		dvd->off();
    }
};