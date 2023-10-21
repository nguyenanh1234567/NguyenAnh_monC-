#include <iostream>
using namespace std;

int main() {
    for (int i = 1; i <= 4; i++) {
        // Print leading spaces
        for (int j = 1; j <= 4 - i; j++) {
            cout << " ";
        }

        // Print asterisks
        for (int k = 1; k <= 2 * i - 1; k++) {
            cout << "*";
        }

        cout << endl;  // Move to the next line
    }

    return 0;
}