#include <iostream>
using namespace std;

void displayLargerThanN(int arr[], int size, int n) {
    cout << "Numbers in the array greater than " << n << ":" << endl;
    for (int i = 0; i < size; i++) {
        if (arr[i] > n) {
            cout << arr[i] << " ";
        }
    }
    cout << endl;
}

int main() {
    const int ARRAY_SIZE = 10;
    int numbers[ARRAY_SIZE] = {5, 12, 8, 20, 7, 10, 30, 6, 15, 25};
    int n;

    cout << "Enter a number (n): ";
    cin >> n;

    displayLargerThanN(numbers, ARRAY_SIZE, n);

    return 0;
}