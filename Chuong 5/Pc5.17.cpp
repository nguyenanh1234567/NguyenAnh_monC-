#include <iostream>
using namespace std;

int main() {
    const int SALES_PER_ASTERISK = 100;
    int sales[5];

    cout << "Enter today's sales for five stores:\n";
    
    for (int i = 0; i < 5; i++) {
        cout << "Enter today's sales for store " << i + 1 << ": ";
        cin >> sales[i];
    }

    cout << "SALES BAR CHART\n";
    cout << "(Each * = $100)\n";

    for (int i = 0; i < 5; i++) {
        cout << "Store " << i + 1 << ": ";
        for (int j = 0; j < sales[i] / SALES_PER_ASTERISK; j++) {
            cout << '*';
        }
        cout << endl;
    }

    return 0;
}





