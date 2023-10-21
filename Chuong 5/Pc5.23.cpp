#include <iostream>
using namespace std;

int main() {
    int size = 10; // You can change the size as needed

    // Pattern A
    for (int i = 1; i <= size; i++) {
        for (int j = 1; j <= i; j++) {
            cout << "+";
        }
        cout << " ";
        for (int k = 1; k <= size - i; k++) {
            cout << "+";
        }
        cout << endl;
    }

    cout << endl; // Add a line break between Pattern A and Pattern B

    // Pattern B
    for (int i = 1; i <= size; i++) {
        for (int j = 1; j <= i - 1; j++) {
            cout << " ";
        }
        for (int k = 1; k <= size - i + 1; k++) {
            cout << "+";
        }
        cout << " ";
        cout << endl;
    }

    return 0;
}