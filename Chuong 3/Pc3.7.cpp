#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main() {
    // Constants
    const double ADULT_TICKET_PRICE = 10.00;
    const double CHILD_TICKET_PRICE = 6.00;
    const double DISTRIBUTOR_PERCENTAGE = 0.8; // 80%

    // Variables
    string movieName;
    int adultTicketsSold, childTicketsSold;
    double grossProfit, netProfit, distributorAmount;

    // Input
    cout << "Enter the name of the movie: ";
    getline(cin, movieName);
    cout << "Enter the number of adult tickets sold: ";
    cin >> adultTicketsSold;
    cout << "Enter the number of child tickets sold: ";
    cin >> childTicketsSold;

    // Calculate profits and amounts
    grossProfit = (adultTicketsSold * ADULT_TICKET_PRICE) + (childTicketsSold * CHILD_TICKET_PRICE);
    netProfit = grossProfit * DISTRIBUTOR_PERCENTAGE;
    distributorAmount = grossProfit - netProfit;

    // Display the report
    cout << "Movie Name: \"" << movieName << "\"" << endl;
    cout << "Adult Tickets Sold: " << adultTicketsSold << endl;
    cout << "Child Tickets Sold: " << childTicketsSold << endl;
    cout << fixed << setprecision(2); // Format output to display two decimal places
    cout << "Gross Box Office Profit: $ " << grossProfit << endl;
    cout << "Net Box Office Profit: $ " << netProfit << endl;
    cout << "Amount Paid to Distributor: $ " << distributorAmount << endl;

    return 0;
}