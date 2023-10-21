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
    Coin coin;
    int headsCount = 0;
    int tailsCount = 0;

    std::cout << "Initially, the side facing up is: " << coin.getSideUp() << std::endl;

    for (int i = 0; i < 20; i++) {
        coin.toss();
        std::cout << "After tossing, the side facing up is: " << coin.getSideUp() << std::endl;

        if (coin.getSideUp() == "heads") {
            headsCount++;
        } else {
            tailsCount++;
        }
    }

    std::cout << "Heads count: " << headsCount << std::endl;
    std::cout << "Tails count: " << tailsCount << std::endl;

    return 0;
}