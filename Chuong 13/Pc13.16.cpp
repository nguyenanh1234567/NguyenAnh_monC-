#include <iostream>
using namespace std;

class Temperature {
private:
    double temperature;

public:
    Temperature(double temp) {
        temperature = temp;
    }

    bool isEthylFreezing() {
        return temperature <= -173;
    }

    bool isEthylBoiling() {
        return temperature >= 172;
    }

    bool isOxygenFreezing() {
        return temperature <= -362;
    }

    bool isOxygenBoiling() {
        return temperature >= -306;
    }

    bool isWaterFreezing() {
        return temperature <= 32;
    }

    bool isWaterBoiling() {
        return temperature >= 212;
    }
};

int main() {
    double userTemperature;
    
    cout << "Enter a temperature in Fahrenheit: ";
    cin >> userTemperature;

    Temperature temp(userTemperature);

    cout << "Substances that will freeze at " << userTemperature << " degrees Fahrenheit:" << endl;
    if (temp.isEthylFreezing()) {
        cout << "Ethyl Alcohol" << endl;
    }
    if (temp.isOxygenFreezing()) {
        cout << "Oxygen" << endl;
    }
    if (temp.isWaterFreezing()) {
        cout << "Water" << endl;
    }

    cout << "Substances that will boil at " << userTemperature << " degrees Fahrenheit:" << endl;
    if (temp.isEthylBoiling()) {
        cout << "Ethyl Alcohol" << endl;
    }
    if (temp.isOxygenBoiling()) {
        cout << "Oxygen" << endl;
    }
    if (temp.isWaterBoiling()) {
        cout << "Water" << endl;
    }

    return 0;
}