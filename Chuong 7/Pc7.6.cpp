#include <iostream>
#include <fstream>
using namespace std;

const int NUM_MONTHS = 3;
const int NUM_DAYS = 30;

int main() {
    char weatherData[NUM_MONTHS][NUM_DAYS];
    int rainyDays[NUM_MONTHS] = {0};
    int cloudyDays[NUM_MONTHS] = {0};
    int sunnyDays[NUM_MONTHS] = {0};
    int mostRainyMonth = 0;
    ifstream inputFile("RainOrShine.txt");

    if (!inputFile) {
        cerr << "Error: Unable to open the input file." << endl;
        return 1;
    }

    for (int month = 0; month < NUM_MONTHS; month++) {
        for (int day = 0; day < NUM_DAYS; day++) {
            inputFile >> weatherData[month][day];
            switch (weatherData[month][day]) {
                case 'R':
                    rainyDays[month]++;
                    break;
                case 'C':
                    cloudyDays[month]++;
                    break;
                case 'S':
                    sunnyDays[month]++;
                    break;
            }
        }
    }

    inputFile.close();

    cout << "Weather Report:" << endl;
    for (int month = 0; month < NUM_MONTHS; month++) {
        cout << "Month " << month << ": " << endl;
        cout << "Rainy Days: " << rainyDays[month] << endl;
        cout << "Cloudy Days: " << cloudyDays[month] << endl;
        cout << "Sunny Days: " << sunnyDays[month] << endl;

        if (rainyDays[month] > rainyDays[mostRainyMonth]) {
            mostRainyMonth = month;
        }
    }

    cout << "Month with the largest number of rainy days: " << mostRainyMonth << endl;

    return 0;
}