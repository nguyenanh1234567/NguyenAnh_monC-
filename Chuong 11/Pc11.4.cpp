#include <iostream>
#include <string>
using namespace std;

struct WeatherData {
    double totalRainfall;
    int highTemperature;
    int lowTemperature;
    double averageTemperature;
};

int main() {
    WeatherData yearWeather[12];
    const string months[12] = {"January", "February", "March", "April", "May", "June",
                              "July", "August", "September", "October", "November", "December"};

    for (int i = 0; i < 12; i++) {
        cout << "Enter weather data for " << months[i] << ":\n";
        cout << "Total Rainfall (inches): ";
        cin >> yearWeather[i].totalRainfall;
        cout << "High Temperature (Fahrenheit): ";
        cin >> yearWeather[i].highTemperature;
        cout << "Low Temperature (Fahrenheit): ";
        cin >> yearWeather[i].lowTemperature;

        // Calculate and store average temperature
        yearWeather[i].averageTemperature = (yearWeather[i].highTemperature + yearWeather[i].lowTemperature) / 2;
    }

    // Calculate and display statistics
    double totalAnnualRainfall = 0.0;
    int highestTemp = INT_MIN;
    int lowestTemp = INT_MAX;
    string highestMonth, lowestMonth;
    double totalAvgTemp = 0.0;

    for (int i = 0; i < 12; i++) {
        totalAnnualRainfall += yearWeather[i].totalRainfall;

        if (yearWeather[i].highTemperature > highestTemp) {
            highestTemp = yearWeather[i].highTemperature;
            highestMonth = months[i];
        }

        if (yearWeather[i].lowTemperature < lowestTemp) {
            lowestTemp = yearWeather[i].lowTemperature;
            lowestMonth = months[i];
        }

        totalAvgTemp += yearWeather[i].averageTemperature;
    }

    double averageAnnualTemp = totalAvgTemp / 12;

    cout << "\nAnnual Weather Statistics:\n";
    cout << "Total Annual Rainfall: " << totalAnnualRainfall << " inches\n";
    cout << "Highest Temperature: " << highestTemp << "°F (in " << highestMonth << ")\n";
    cout << "Lowest Temperature: " << lowestTemp << "°F (in " << lowestMonth << ")\n";
    cout << "Average Annual Temperature: " << averageAnnualTemp << "°F\n";

    return 0;
}