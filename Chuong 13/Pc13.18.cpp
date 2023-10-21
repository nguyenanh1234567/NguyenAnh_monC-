#include <iostream>
#include <ctime>
#include <cstdlib>

class Die {
public:
    Die() {
        std::srand(std::time(nullptr));
    }

    int roll() {
        return (std::rand() % 6) + 1;
    }
};

int main() {
    Die die;
    int userTotal = 0;
    int computerTotal = 0;
    char choice;

    std::cout << "Welcome to the Game of 21!" << std::endl;

    do {
        // Computer's turn
        int computerRoll1 = die.roll();
        int computerRoll2 = die.roll();
        computerTotal += computerRoll1 + computerRoll2;

        // User's turn
        std::cout << "Computer rolls: " << computerRoll1 << " and " << computerRoll2 << std::endl;
        std::cout << "Your total: " << userTotal << std::endl;

        if (userTotal > 21) {
            std::cout << "Bust! You went over 21. Computer wins!" << std::endl;
            break;
        }

        std::cout << "Roll again? (y/n): ";
        std::cin >> choice;

        if (choice == 'y') {
            int userRoll1 = die.roll();
            int userRoll2 = die.roll();
            userTotal += userRoll1 + userRoll2;
            std::cout << "You roll: " << userRoll1 << " and " << userRoll2 << std::endl;
        }
    } while (choice == 'y');

    std::cout << "Computer's total: " << computerTotal << std::endl;
    if (userTotal > 21) {
        std::cout << "You went over 21. Computer wins!" << std::endl;
    } else if (computerTotal > 21) {
        std::cout << "Computer went over 21. You win!" << std::endl;
    } else if (userTotal > computerTotal) {
        std::cout << "You win!" << std::endl;
    } else if (userTotal < computerTotal) {
        std::cout << "Computer wins!" << std::endl;
    } else {
        std::cout << "It's a tie!" << std::endl;
    }

    return 0;
}