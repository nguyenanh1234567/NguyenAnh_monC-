#include <iostream>
using namespace std;

int main() {
    double currentLevel = 0.0;  // Initial ocean level in millimeters
    double annualRiseRate = 1.5;  // Ocean level rise rate in millimeters per year

    // Calculate the ocean level rise for 5 years
    double riseIn5Years = currentLevel + (annualRiseRate * 5);

    // Calculate the ocean level rise for 7 years
    double riseIn7Years = currentLevel + (annualRiseRate * 7);

    // Calculate the ocean level rise for 10 years
    double riseIn10Years = currentLevel + (annualRiseRate * 10);

    cout << "In 5 years, the ocean's level will be " << riseIn5Years << " millimeters higher than the current level." << endl;
    cout << "In 7 years, the ocean's level will be " << riseIn7Years << " millimeters higher than the current level." << endl;
    cout << "In 10 years, the ocean's level will be " << riseIn10Years << " millimeters higher than the current level." << endl;

    return 0;
}