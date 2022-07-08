using System.Collections.Generic;

namespace WeatherData
{
    public class WeatherData : Observer.ISubject 
    {
        private List<Observer.IObserver> observers;
        private float temperature;
        private float humidity;
        private float pressure;

        public WeatherData()
        {
            observers = new List<Observer.IObserver>();
        }

        public void OnRegister(Observer.IObserver o) => observers.Add(o);

        public void OnRemove(Observer.IObserver o) => observers.Remove(o);

        public void OnNotify() {
            foreach (var observer in observers) {
                observer.OnUpdate(temperature, humidity, pressure);
            }
        }

        public void MeasurementsChanged() => OnNotify();

        public void SetMeasurements(float temperature, float humidity, float pressure) {
            this.temperature = temperature;
            this.humidity = humidity;
            this.pressure = pressure;

            MeasurementsChanged();
        }

        //Etc Methods.
    }
}