#include <iostream>
using namespace std;

int main() {
    int squareFeet = 391876;  // Number of square feet
    double acresPerSquareFoot = 1.0 / 43560;  // Conversion factor from square feet to acres

    // Calculate the number of acres
    double acres = squareFeet * acresPerSquareFoot;

    cout << "The tract of land with " << squareFeet << " square feet is equivalent to " << acres << " acres." << endl;

    return 0;
}