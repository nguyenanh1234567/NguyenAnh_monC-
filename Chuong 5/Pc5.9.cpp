#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int numFloors;
    int totalRooms = 0;
    int totalOccupied = 0;

    cout << "How many floors does the hotel have? ";
    cin >> numFloors;

    if (numFloors < 1) {
        cout << "Invalid input. The number of floors must be at least 1." << endl;
        return 1;
    }

    for (int floor = 1; floor <= numFloors; floor++) {
        if (floor == 13) {
            // Skip the 13th floor as traditionally there is no 13th floor in hotels.
            continue;
        }

        int roomsOnFloor, occupiedRooms;

        cout << "How many rooms are on floor " << floor << "? ";
        cin >> roomsOnFloor;

        if (roomsOnFloor < 10) {
            cout << "Invalid input. There must be at least 10 rooms on each floor." << endl;
            return 1;
        }

        totalRooms += roomsOnFloor;

        cout << "How many rooms are occupied on floor " << floor << "? ";
        cin >> occupiedRooms;

        if (occupiedRooms < 0 || occupiedRooms > roomsOnFloor) {
            cout << "Invalid input. The number of occupied rooms must be between 0 and " << roomsOnFloor << "." << endl;
            return 1;
        }

        totalOccupied += occupiedRooms;
    }

    double occupancyRate = (static_cast<double>(totalOccupied) / totalRooms) * 100;

    cout << "Total number of rooms in the hotel: " << totalRooms << endl;
    cout << "Total number of rooms occupied: " << totalOccupied << endl;
    cout << "Total number of rooms unoccupied: " << totalRooms - totalOccupied << endl;
    cout << "Occupancy rate: " << fixed << setprecision(2) << occupancyRate << "%" << endl;

    return 0;
}