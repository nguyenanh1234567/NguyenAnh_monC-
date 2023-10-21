#include <iostream>
#include <string>
using namespace std;

int main() {
    const int NUM_SALSA = 5;
    string salsaNames[NUM_SALSA] = {"mild", "medium", "sweet", "hot", "zesty"};
    int jarsSold[NUM_SALSA];
    int totalSales = 0;
    int highestSales = 0;
    int lowestSales = 0;

    cout << "Enter the number of jars sold for each salsa type:" << endl;

    for (int i = 0; i < NUM_SALSA; i++) {
        cout << salsaNames[i] << ": ";
        cin >> jarsSold[i];

        while (jarsSold[i] < 0) {
            cout << "Please enter a valid non-negative value: ";
            cin >> jarsSold[i];
        }

        totalSales += jarsSold[i];

        if (jarsSold[i] > jarsSold[highestSales]) {
            highestSales = i;
        }
        if (jarsSold[i] < jarsSold[lowestSales]) {
            lowestSales = i;
        }
    }

    cout << "Sales Report:" << endl;
    for (int i = 0; i < NUM_SALSA; i++) {
        cout << salsaNames[i] << " Salsa: " << jarsSold[i] << " jars" << endl;
    }
    cout << "Total Sales: " << totalSales << " jars" << endl;
    cout << "Best Selling Salsa: " << salsaNames[highestSales] << " Salsa" << endl;
    cout << "Worst Selling Salsa: " << salsaNames[lowestSales] << " Salsa" << endl;

    return 0;
}