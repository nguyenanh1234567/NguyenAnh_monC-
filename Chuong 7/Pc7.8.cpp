#include <iostream>
using namespace std;

// Function to check if a 3x3 array is a Lo Shu Magic Square
bool isLoShuMagicSquare(int square[3][3]) {
    // Calculate the sum of the first row and use it as the reference sum
    int referenceSum = square[0][0] + square[0][1] + square[0][2];

    // Check if the sums of rows, columns, and diagonals are all equal to the reference sum
    for (int i = 0; i < 3; i++) {
        int rowSum = 0;
        int colSum = 0;

        for (int j = 0; j < 3; j++) {
            rowSum += square[i][j];
            colSum += square[j][i];
        }

        if (rowSum != referenceSum || colSum != referenceSum) {
            return false;
        }
    }

    // Check the two diagonals
    int diag1 = square[0][0] + square[1][1] + square[2][2];
    int diag2 = square[0][2] + square[1][1] + square[2][0];

    return diag1 == referenceSum && diag2 == referenceSum;
}

int main() {
    int square[3][3];

    cout << "Enter a 3x3 square as nine integers: " << endl;

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> square[i][j];
        }
    }

    if (isLoShuMagicSquare(square)) {
        cout << "It's a Lo Shu Magic Square!" << endl;
    } else {
        cout << "It's not a Lo Shu Magic Square." << endl;
    }

    return 0;
}