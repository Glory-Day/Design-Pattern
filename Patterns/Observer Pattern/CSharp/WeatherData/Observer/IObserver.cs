namespace WeatherData.Observer
{
    public interface IObserver
    {
        void OnUpdate(float temperature, float humidity, float pressure);
    }
}