#include <iostream>
using namespace std;

int main() {
    int gasTankSize = 20;  // Gallons in the gas tank
    double townMPG = 23.5;  // Average miles per gallon in town
    double highwayMPG = 28.9;  // Average miles per gallon on the highway

    // Calculate the distance when driven in town
    double townDistance = gasTankSize * townMPG;

    // Calculate the distance when driven on the highway
    double highwayDistance = gasTankSize * highwayMPG;

    cout << "When driven in town, the car can travel " << townDistance << " miles on one tank of gas." << endl;
    cout << "When driven on the highway, the car can travel " << highwayDistance << " miles on one tank of gas." << endl;

    return 0;
}