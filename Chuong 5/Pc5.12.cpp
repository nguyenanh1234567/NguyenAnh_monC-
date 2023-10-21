#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double celsius, fahrenheit;

    cout << "Celsius to Fahrenheit Conversion Table" << endl;
    cout << "Celsius\tFahrenheit" << endl;
    cout << "-------------------" << endl;

    for (celsius = 0; celsius <= 20; celsius++) {
        fahrenheit = (celsius * 9.0 / 5.0) + 32;
        cout << fixed << setprecision(2);
        cout << celsius << "\t" << fahrenheit << endl;
    }

    return 0;
}