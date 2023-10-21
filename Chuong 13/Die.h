#include <iostream>
#include <cstdlib> // For rand and srand functions
#include <ctime>   // For time function

class Die {
public:
    Die() {
        // Initialize the random number generator
        srand(static_cast<unsigned>(time(0)));
    }

    int roll() {
        return (rand() % 6) + 1; // Generates a random number between 1 and 6
    }
};