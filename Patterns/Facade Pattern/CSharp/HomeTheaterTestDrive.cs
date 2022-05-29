using HomeTheater;

public class HomeTheaterTestDrive
{
    public static void Main(string[] args)
    {
        HomeTheater.Amplifier amp = new HomeTheater.Amplifier("Top-O-Line Amplifier");
        HomeTheater.DvdPlayer dvd = new HomeTheater.DvdPlayer("Top-O-Line DVD Player");
        HomeTheater.CdPlayer cd = new HomeTheater.CdPlayer("Top-O-Line CD Player");
        HomeTheater.Projector projector = new HomeTheater.Projector("Top-O-Line Projector");
        HomeTheater.PopcornPopper popper = new HomeTheater.PopcornPopper("Popcorn Popper");
        HomeTheater.Screen screen = new HomeTheater.Screen("Theater Screen");
        HomeTheater.TheaterLights lights = new HomeTheater.TheaterLights("Theater Ceiling Lights");
        HomeTheater.Tuner tuner = new HomeTheater.Tuner("Top-O-Line AM/FM Tuner");

        HomeTheaterFacade homeTheater = new HomeTheaterFacade(amp, dvd, cd, projector, popper, screen, lights, tuner);

        homeTheater.WatchMovie("Raiders of the Lost Ark");
        homeTheater.EndMovie();
    }
}
