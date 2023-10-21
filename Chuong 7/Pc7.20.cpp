#include <iostream>
#include <iomanip>
using namespace std;

const int numRows = 15;
const int numSeatsPerRow = 30;

// Function to initialize seat prices
void initializeSeatPrices(double seatPrices[]) {
    // You can read prices from a file or take user input
    // For simplicity, we'll set fixed prices here
    for (int i = 0; i < numRows; i++) {
        seatPrices[i] = 10.0 + i * 5.0;
    }
}

// Function to display seating chart
void displaySeatingChart(char seatingChart[][numSeatsPerRow]) {
    cout << " Seats\n";
    for (int row = 0; row < numRows; row++) {
        cout << "Row " << setw(2) << (row + 1) << " ";
        for (int seat = 0; seat < numSeatsPerRow; seat++) {
            cout << seatingChart[row][seat];
        }
        cout << endl;
    }
}

// Function to sell tickets
void sellTickets(char seatingChart[][numSeatsPerRow], double seatPrices[], double& totalSales) {
    int row, seat, numTickets;
    cout << "Enter row and seat numbers (e.g., 1 3) for the number of tickets to purchase: ";
    cin >> row >> seat >> numTickets;

    // Check if the selected seats are available
    if (seatingChart[row - 1][seat - 1] == '#') {
        double totalPrice = seatPrices[row - 1] * numTickets;
        totalSales += totalPrice;

        // Mark the seats as sold
        for (int i = 0; i < numTickets; i++) {
            seatingChart[row - 1][seat - 1 + i] = '*';
        }

        cout << "Tickets purchased successfully. Total Price: $" << totalPrice << endl;
    } else {
        cout << "Sorry, the selected seats are not available.\n";
    }
}

int main() {
    char seatingChart[numRows][numSeatsPerRow];
    double seatPrices[numRows];
    double totalSales = 0.0;

    // Initialize seating chart
    for (int row = 0; row < numRows; row++) {
        for (int seat = 0; seat < numSeatsPerRow; seat++) {
            seatingChart[row][seat] = '#';
        }
    }

    // Initialize seat prices
    initializeSeatPrices(seatPrices);

    char choice;
    do {
        displaySeatingChart(seatingChart);
        cout << "Options:\n";
        cout << "S - Sell Tickets\n";
        cout << "Q - Quit\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice) {
            case 'S':
                sellTickets(seatingChart, seatPrices, totalSales);
                break;
            case 'Q':
                break;
            default:
                cout << "Invalid choice. Please try again.\n";
        }
    } while (choice != 'Q');

    cout << "Total Sales: $" << totalSales << endl;

    return 0;
}