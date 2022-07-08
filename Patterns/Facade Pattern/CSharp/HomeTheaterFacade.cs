using System;

using HomeTheater;

public class HomeTheaterFacade
{
    private HomeTheater.Amplifier amp;
    private HomeTheater.DvdPlayer dvd;
    private HomeTheater.CdPlayer cd;
    private HomeTheater.Projector projector;
    private HomeTheater.PopcornPopper popper;
    private HomeTheater.Screen screen;
    private HomeTheater.TheaterLights lights;
    private HomeTheater.Tuner tuner;

    public HomeTheaterFacade(HomeTheater.Amplifier amp, HomeTheater.DvdPlayer dvd, HomeTheater.CdPlayer cd, 
        Projector projector, PopcornPopper popper, Screen screen, TheaterLights lights, Tuner tuner) 
    {
        this.amp = amp;
        this.dvd = dvd;
        this.cd = cd;
        this.projector = projector;
        this.popper = popper;
        this.screen = screen;
        this.lights = lights;
        this.tuner = tuner;
    }

    public void WatchMovie(string movie)
    {
        Console.WriteLine("Get ready to watch a movie...");
        popper.On();
        popper.Pop();
        lights.Dim(10);
        screen.Down();
        projector.On();
        projector.WideScreenMode();
        amp.On();
        amp.SetDvd(dvd);
        amp.SetSurroundSound();
        amp.SetVolumn(5);
        dvd.On();
        dvd.Play(movie);
    }

    public void EndMovie() {
        Console.WriteLine("Shutting movie theater down...");
        popper.Off();
		lights.On();
		screen.Up();
		projector.Off();
		amp.Off();
		dvd.Stop();
		dvd.Eject();
		dvd.Off();
    }
}