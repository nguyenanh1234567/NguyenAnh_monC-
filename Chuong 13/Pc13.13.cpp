#include <iostream>
#include <cstdlib> // For rand and srand functions
#include <ctime>   // For time function

class Coin {
private:
    std::string sideUp;

public:
    Coin() {
        // Initialize the random number generator
        srand(static_cast<unsigned>(time(0)));

        // Randomly determine the side of the coin that is facing up
        int randomValue = rand() % 2;
        if (randomValue == 0) {
            sideUp = "heads";
        } else {
            sideUp = "tails";
        }
    }

    void toss() {
        // Randomly determine the side of the coin that is facing up
        int randomValue = rand() % 2;
        if (randomValue == 0) {
            sideUp = "heads";
        } else {
            sideUp = "tails";
        }
    }

    std::string getSideUp() const {
        return sideUp;
    }
};

int main() {
    Coin quarter, dime, nickel;
    double balance = 0.0;

    while (balance < 1.0) {
        quarter.toss();
        dime.toss();
        nickel.toss();

        if (quarter.getSideUp() == "heads") {
            balance += 0.25;
        }
        if (dime.getSideUp() == "heads") {
            balance += 0.10;
        }
        if (nickel.getSideUp() == "heads") {
            balance += 0.05;
        }

        std::cout << "Balance: $" << balance << std::endl;
    }

    if (balance == 1.0) {
        std::cout << "You win the game!" << std::endl;
    } else {
        std::cout << "You lose the game." << std::endl;
    }

    return 0;
}