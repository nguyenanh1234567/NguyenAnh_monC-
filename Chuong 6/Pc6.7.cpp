#include <iostream>
#include <iomanip>
using namespace std;

// Function prototype
double celsius(double fahrenheit);

int main() {
    cout << "Fahrenheit\tCelsius" << endl;

    for (int fahrenheit = 0; fahrenheit <= 20; fahrenheit++) {
        double celsiusTemp = celsius(fahrenheit);
        cout << fahrenheit << "\t\t" << fixed << setprecision(2) << celsiusTemp << endl;
    }

    return 0;
}

// Function to convert Fahrenheit to Celsius
double celsius(double fahrenheit) {
    return (5.0 / 9.0) * (fahrenheit - 32);
}