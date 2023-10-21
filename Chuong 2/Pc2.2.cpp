#include <iostream>
using namespace std;

int main() {
    // Constants
    double totalSales = 8.6;  // Total sales in million dollars
    double eastCoastPercentage = 0.58;  // East Coast sales percentage (58%)

    // Calculate the East Coast sales
    double eastCoastSales = totalSales * eastCoastPercentage;

    cout << "The East Coast division is predicted to generate $" << eastCoastSales << " million in sales this year." << endl;

    return 0;
}