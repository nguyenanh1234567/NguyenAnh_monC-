#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

const int ARRAY_SIZE = 5;

int main() {
    int lottery[ARRAY_SIZE];
    int user[ARRAY_SIZE];
    int matchingDigits = 0;

    // Seed the random number generator
    srand(static_cast<unsigned>(time(0)));

    // Generate random numbers for the lottery
    for (int i = 0; i < ARRAY_SIZE; i++) {
        lottery[i] = rand() % 10; // Generates random numbers from 0 to 9
    }

    cout << "Welcome to the Lottery Game!\n";
    cout << "Enter 5 digits (0-9) to play the game:\n";

    // Get user input
    for (int i = 0; i < ARRAY_SIZE; i++) {
        cout << "Enter digit " << i + 1 << ": ";
        cin >> user[i];
    }

    // Display the lottery numbers
    cout << "Lottery numbers: ";
    for (int i = 0; i < ARRAY_SIZE; i++) {
        cout << lottery[i] << " ";
    }
    cout << endl;

    // Check for matching digits
    for (int i = 0; i < ARRAY_SIZE; i++) {
        if (lottery[i] == user[i]) {
            matchingDigits++;
        }
    }

    // Display the number of matching digits
    cout << "Matching digits: " << matchingDigits << endl;

    // Check if the user is a grand prize winner
    if (matchingDigits == ARRAY_SIZE) {
        cout << "Congratulations! You are a grand prize winner!\n";
    } else {
        cout << "Better luck next time!\n";
    }

    return 0;
}