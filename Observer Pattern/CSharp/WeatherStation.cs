using WeatherData;

public class WeatherStation {
    public static void Main(string[] args) {
        WeatherData.WeatherData weatherData = new WeatherData.WeatherData();

        WeatherData.CurrentConditionsDisplay currentConditionsDisplay = new WeatherData.CurrentConditionsDisplay(weatherData);
        weatherData.SetMeasurements(80, 65, 30.4f);
        weatherData.SetMeasurements(82, 70, 29.2f);
        weatherData.SetMeasurements(78, 90, 29.2f);
    }
}
