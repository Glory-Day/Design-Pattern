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

#include "./HomeTheaterFacade.cpp"

using namespace std;

int main() {
    Amplifier* amp = new Amplifier("Top-O-Line Amplifier");
    CdPlayer* cd = new CdPlayer("Top-O-Line CD Player");
    DvdPlayer* dvd = new DvdPlayer("Top-O-Line DVD Player");
    PopcornPopper* popper = new PopcornPopper("Popcorn Popper");
    Projector* projector = new Projector("Top-O-Line Projector");
    Screen* screen = new Screen("Theater Screen");
    TheaterLights* lights = new TheaterLights("Theater Ceiling Lights");
    Tuner* tuner = new Tuner("Top-O-Line AM/FM Tuner");

    HomeTheaterFacade* homeTheater = new HomeTheaterFacade(amp, dvd, cd, projector, popper, screen, lights, tuner);

    homeTheater->watchMovie("Raiders of the Lost Ark");
    homeTheater->endMovie();
}