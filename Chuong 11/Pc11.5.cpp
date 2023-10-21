#include <iostream>
#include <string>
using namespace std;

enum Months { JANUARY, FEBRUARY, MARCH, APRIL, MAY, JUNE,
              JULY, AUGUST, SEPTEMBER, OCTOBER, NOVEMBER, DECEMBER };

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

    for (int i = JANUARY; i <= DECEMBER; i++) {
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

    // Rest of the code to calculate and display statistics (same as in the previous program)

    return 0;
}