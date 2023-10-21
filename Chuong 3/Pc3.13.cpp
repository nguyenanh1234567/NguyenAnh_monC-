#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    const double YEN_PER_DOLLAR = 98.93;
    const double EUROS_PER_DOLLAR = 0.74;

    double dollars, yen, euros;

    // Input the amount in U.S. dollars
    cout << "Enter the amount in U.S. dollars: $";
    cin >> dollars;

    // Convert dollars to yen and euros
    yen = dollars * YEN_PER_DOLLAR;
    euros = dollars * EUROS_PER_DOLLAR;

    // Display the converted amounts
    cout << fixed << setprecision(2);  // Display currency with two decimal places
    cout << "Equivalent in Japanese Yen: " << yen << " yen" << endl;
    cout << "Equivalent in Euros: " << euros << " euros" << endl;

    return 0;
}