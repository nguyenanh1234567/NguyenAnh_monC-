#include <iostream>
using namespace std;

int main() {
    double celsius, fahrenheit;

    // Input temperature in Celsius
    cout << "Enter the temperature in Celsius: ";
    cin >> celsius;

    // Convert Celsius to Fahrenheit using the formula
    fahrenheit = (celsius * 9/5) + 32;

    // Display the temperature in Fahrenheit
    cout << "Temperature in Fahrenheit: " << fahrenheit << " degrees Fahrenheit" << endl;

    return 0;
}