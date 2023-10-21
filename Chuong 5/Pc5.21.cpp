#include <iostream>
#include <cstdlib>  // for rand() and srand() functions
#include <ctime>    // for time() function
using namespace std;

int main() {
    // Initialize random number generator with current time
    srand(time(0));

    // Generate a random number between 1 and 100
    int randomNumber = rand() % 100 + 1;

    int userGuess;
    int attempts = 0;

    cout << "Welcome to the Random Number Guessing Game!" << endl;

    do {
        cout << "Enter your guess (between 1 and 100): ";
        cin >> userGuess;

        if (userGuess < 1 || userGuess > 100) {
            cout << "Please enter a valid guess between 1 and 100." << endl;
            continue;
        }

        attempts++;

        if (userGuess < randomNumber) {
            cout << "Too low, try again." << endl;
        } else if (userGuess > randomNumber) {
            cout << "Too high, try again." << endl;
        } else {
            cout << "Congratulations! You guessed the number (" << randomNumber << ") in " << attempts << " attempt(s)!" << endl;
        }
    } while (userGuess != randomNumber);

    return 0;
}