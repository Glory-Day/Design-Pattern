namespace WeatherData.Observer
{
    public interface ISubject
    {
        void OnRegister(IObserver o);
        void OnRemove(IObserver o);
        void OnNotify();
    }
}