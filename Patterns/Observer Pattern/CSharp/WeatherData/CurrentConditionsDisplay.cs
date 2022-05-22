using System;

namespace WeatherData 
{
    public class CurrentConditionsDisplay : Observer.IObserver, Observer.IDisplayElement 
    {
        private float temperature;
        private float humidity;
        private WeatherData weatherData;

        public CurrentConditionsDisplay(WeatherData weatherData)
        {
            this.weatherData = weatherData;
            this.weatherData.OnRegister(this);
        }

        public void OnUpdate(float temperature, float humidity, float pressure) 
        {
            this.temperature = temperature;
            this.humidity = humidity;
            OnDisplay();
        }

        public void OnDisplay()
        {
            Console.WriteLine("현재 상태: 온도 " + temperature + "F, 습도 " + humidity + "%");
        }
    }
}