#include <iostream>
#include <string>
using namespace std;

// Function prototypes
int getNumAccidents(const string& regionName);
void findLowest(int north, int south, int east, int west, int central);

int main() {
    int northAccidents, southAccidents, eastAccidents, westAccidents, centralAccidents;

    // Get accident numbers for each region
    northAccidents = getNumAccidents("North");
    southAccidents = getNumAccidents("South");
    eastAccidents = getNumAccidents("East");
    westAccidents = getNumAccidents("West");
    centralAccidents = getNumAccidents("Central");

    // Find and display the region with the fewest accidents
    findLowest(northAccidents, southAccidents, eastAccidents, westAccidents, centralAccidents);

    return 0;
}

// Function to get the number of accidents for a region
int getNumAccidents(const string& regionName) {
    int accidents;
    do {
        cout << "Enter the number of accidents in " << regionName << " region: ";
        cin >> accidents;
    } while (accidents < 0);
    return accidents;
}

// Function to find the region with the fewest accidents
void findLowest(int north, int south, int east, int west, int central) {
    int lowestAccidents = north;
    string lowestRegion = "North";

    if (south < lowestAccidents) {
        lowestAccidents = south;
        lowestRegion = "South";
    }
    if (east < lowestAccidents) {
        lowestAccidents = east;
        lowestRegion = "East";
    }
    if (west < lowestAccidents) {
        lowestAccidents = west;
        lowestRegion = "West";
    }
    if (central < lowestAccidents) {
        lowestAccidents = central;
        lowestRegion = "Central";
    }

    cout << "The region with the fewest accidents is " << lowestRegion << " with " << lowestAccidents << " accidents." << endl;
}