#include <iostream>
#include <cstdlib>  // For rand and srand functions
#include <ctime>    // For time function
using namespace std;

// Function prototype
void coinToss(int numTosses);

int main() {
    int numTosses;

    // Seed the random number generator with the current time
    srand(time(0));

    cout << "How many times would you like to toss the coin? ";
    cin >> numTosses;

    coinToss(numTosses);

    return 0;
}

// Function to simulate coin toss
void coinToss(int numTosses) {
    cout << "Coin toss results:" << endl;

    for (int toss = 1; toss <= numTosses; toss++) {
        int result = 1 + rand() % 2;  // Generate a random number (1 or 2)

        if (result == 1) {
            cout << "Toss " << toss << ": Heads" << endl;
        } else {
            cout << "Toss " << toss << ": Tails" << endl;
        }
    }
}