#include <iostream>
using namespace std;

int main() {
    int num;
    int sum = 0;

    cout << "Enter a positive integer: ";
    cin >> num;

    if (num < 1) {
        cout << "Please enter a positive integer." << endl;
    } else {
        for (int i = 1; i <= num; i++) {
            sum += i;
        }

        cout << "The sum of integers from 1 to " << num << " is: " << sum << endl;
    }

    return 0;
}
