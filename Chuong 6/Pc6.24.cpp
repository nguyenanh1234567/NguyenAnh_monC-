#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

// Function to get the user's choice
char getUserChoice() {
    char choice;
    cout << "Enter your choice (R for Rock, P for Paper, S for Scissors): ";
    cin >> choice;
    return toupper(choice);
}

// Function to get the computer's choice
char getComputerChoice() {
    int computerChoice = rand() % 3 + 1;
    switch (computerChoice) {
        case 1: return 'R';
        case 2: return 'P';
        case 3: return 'S';
        default: return 'R'; // Default case is rock
    }
}

// Function to determine the winner
char determineWinner(char user, char computer) {
    if (user == computer) {
        return 'T'; // Tie
    }
    if ((user == 'R' && computer == 'S') || (user == 'S' && computer == 'P') || (user == 'P' && computer == 'R')) {
        return 'U'; // User wins
    }
    return 'C'; // Computer wins
}

int main() {
    char userChoice, computerChoice;
    char winner;
    
    // Initialize random seed
    srand(static_cast<unsigned>(time(nullptr)));
    
    cout << "Let's play Rock, Paper, Scissors!" << endl;
    
    userChoice = getUserChoice();
    computerChoice = getComputerChoice();
    
    cout << "Computer chose: " << computerChoice << endl;
    
    winner = determineWinner(userChoice, computerChoice);
    
    if (winner == 'T') {
        cout << "It's a tie!" << endl;
    } else if (winner == 'U') {
        cout << "You win!" << endl;
    } else {
        cout << "Computer wins!" << endl;
    }
    
    return 0;
}