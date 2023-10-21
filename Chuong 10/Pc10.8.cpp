#include <iostream>
#include <string>
using namespace std;

int main() {
    string input;
    cout << "Enter a series of single-digit numbers with no separators: ";
    cin >> input;

    int sum = 0;
    char highest = input[0];
    char lowest = input[0];

    for (char digit : input) {
        if (isdigit(digit)) {
            int num = digit - '0';
            sum += num;

            if (digit > highest) {
                highest = digit;
            }
            if (digit < lowest) {
                lowest = digit;
            }
        }
    }

    cout << "Sum of single-digit numbers: " << sum << endl;
    cout << "Highest digit: " << highest << endl;
    cout << "Lowest digit: " << lowest << endl;

    return 0;
}