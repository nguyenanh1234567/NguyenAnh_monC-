#include <iostream>
using namespace std;

int main() {
    int milesDriven = 375;  // Number of miles driven
    int gallonsOfGasUsed = 15;  // Gallons of gasoline used

    // Calculate the miles per gallon (MPG)
    double mpg = static_cast<double>(milesDriven) / gallonsOfGasUsed;

    cout << "The car gets " << mpg << " miles per gallon (MPG)." << endl;

    return 0;
}