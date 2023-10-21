#include <iostream>
#include "Die.h"
int main() {
    Die die;
    int fishingPoints = 0;
    char playAgain;

    do {
        int rollResult = die.roll();

        // Simulate catching different items based on the die result
        if (rollResult == 1) {
            std::cout << "You caught a huge fish! +10 points" << std::endl;
            fishingPoints += 10;
        } else if (rollResult == 2) {
            std::cout << "You caught an old shoe. +1 point" << std::endl;
            fishingPoints += 1;
        } else if (rollResult == 3) {
            std::cout << "You caught a little fish. +3 points" << std::endl;
            fishingPoints += 3;
        } // Add more items as needed

        std::cout << "Do you want to continue fishing? (Y/N): ";
        std::cin >> playAgain;
    } while (playAgain == 'Y' || playAgain == 'y');

    std::cout << "Total fishing points: " << fishingPoints << std::endl;

    if (fishingPoints >= 10) {
        std::cout << "Congratulations! You are a great fisherman!" << std::endl;
    } else if (fishingPoints >= 5) {
        std::cout << "Nice job! You caught some good fish." << std::endl;
    } else {
        std::cout << "Keep practicing! You can do better." << std::endl;
    }

    return 0;
}