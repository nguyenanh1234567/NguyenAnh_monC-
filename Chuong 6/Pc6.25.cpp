#include <iostream>
using namespace std;

// Function prototypes
int getNumDays();
void getTimeOfDepartureAndArrival(int& departureHour, int& arrivalHour);
double getRoundTripAirfare();
double getCarRentals();
double getPrivateVehicleExpenses();
double getParkingFees();
double getTaxiFees();
double getConferenceFees();
double getHotelExpenses();
void getMeals(double& breakfast, double& lunch, double& dinner);
double calculateTotalExpenses(int numDays, int departureHour, int arrivalHour, double roundTripAirfare, double carRentals, double privateVehicleExpenses, double parkingFees, double taxiFees, double conferenceFees, double hotelExpenses, double breakfast, double lunch, double dinner);
double calculateTotalAllowedExpenses(int numDays, int departureHour, int arrivalHour);

int main() {
    // Declare variables to store expenses
    int numDays, departureHour, arrivalHour;
    double roundTripAirfare, carRentals, privateVehicleExpenses, parkingFees, taxiFees, conferenceFees, hotelExpenses, breakfast, lunch, dinner;

    // Call functions to gather input data
    numDays = getNumDays();
    getTimeOfDepartureAndArrival(departureHour, arrivalHour);
    roundTripAirfare = getRoundTripAirfare();
    carRentals = getCarRentals();
    privateVehicleExpenses = getPrivateVehicleExpenses();
    parkingFees = getParkingFees();
    taxiFees = getTaxiFees();
    conferenceFees = getConferenceFees();
    hotelExpenses = getHotelExpenses();
    getMeals(breakfast, lunch, dinner);

    // Calculate total expenses and total allowed expenses
    double totalExpenses = calculateTotalExpenses(numDays, departureHour, arrivalHour, roundTripAirfare, carRentals, privateVehicleExpenses, parkingFees, taxiFees, conferenceFees, hotelExpenses, breakfast, lunch, dinner);
    double totalAllowedExpenses = calculateTotalAllowedExpenses(numDays, departureHour, arrivalHour);

    // Display the travel expenses report
    cout << "Total Expenses: $" << totalExpenses << endl;
    cout << "Total Allowed Expenses: $" << totalAllowedExpenses << endl;

    // Check if there's an excess or savings
    if (totalExpenses > totalAllowedExpenses) {
        cout << "Excess: $" << totalExpenses - totalAllowedExpenses << endl;
    } else {
        cout << "Savings: $" << totalAllowedExpenses - totalExpenses << endl;
    }

    return 0;
}

