#include <iostream>
using namespace std;

// Function to display the game board
void displayBoard(char board[][3]) {
    for (int row = 0; row < 3; row++) {
        for (int col = 0; col < 3; col++) {
            cout << board[row][col];
            if (col < 2) cout << " | ";
        }
        cout << endl;
        if (row < 2) cout << "---------" << endl;
    }
}

// Function to check for a win
bool checkWin(char board[][3], char player) {
    for (int i = 0; i < 3; i++) {
        if (board[i][0] == player && board[i][1] == player && board[i][2] == player)
            return true; // Check rows
        if (board[0][i] == player && board[1][i] == player && board[2][i] == player)
            return true; // Check columns
    }
    if (board[0][0] == player && board[1][1] == player && board[2][2] == player)
        return true; // Check diagonal
    if (board[0][2] == player && board[1][1] == player && board[2][0] == player)
        return true; // Check reverse diagonal
    return false;
}

// Function to check for a tie
bool checkTie(char board[][3]) {
    for (int row = 0; row < 3; row++) {
        for (int col = 0; col < 3; col++) {
            if (board[row][col] == '*')
                return false; // If any cell is empty, the game can continue
        }
    }
    return true; // If no empty cells, it's a tie
}

int main() {
    char board[3][3] = {
        {'*', '*', '*'},
        {'*', '*', '*'},
        {'*', '*', '*'}
    };
    char currentPlayer = 'X';

    cout << "Tic-Tac-Toe Game" << endl;
    displayBoard(board);

    int row, col;

    while (true) {
        cout << "Player " << currentPlayer << ", enter your move (row and column): ";
        cin >> row >> col;

        if (row >= 0 && row < 3 && col >= 0 && col < 3 && board[row][col] == '*') {
            board[row][col] = currentPlayer;
            
            displayBoard(board);

            if (checkWin(board, currentPlayer)) {
                cout << "Player " << currentPlayer << " wins!" << endl;
                break;
            } else if (checkTie(board)) {
                cout << "It's a tie!" << endl;
                break;
            }

            currentPlayer = (currentPlayer == 'X') ? 'O' : 'X';
        } else {
            cout << "Invalid move. Try again." << endl;
        }
    }

    return 0;
}