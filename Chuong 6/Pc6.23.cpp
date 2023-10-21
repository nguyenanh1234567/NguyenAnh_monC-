#include <iostream>
#include <fstream>
using namespace std;

// Function to check if a number is prime
bool isPrime(int num) {
    if (num <= 1) {
        return false; // 0 and 1 are not prime
    }
    if (num <= 3) {
        return true; // 2 and 3 are prime
    }
    if (num % 2 == 0 || num % 3 == 0) {
        return false; // Numbers divisible by 2 or 3 are not prime
    }
    // Check for prime using 6k +/- 1 rule
    for (int i = 5; i * i <= num; i += 6) {
        if (num % i == 0 || num % (i + 2) == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    ofstream outputFile("prime_numbers.txt"); // Create a file for writing
    
    if (!outputFile) {
        cerr << "Failed to open the file." << endl;
        return 1;
    }

    // Find and store prime numbers from 1 through 100
    for (int num = 1; num <= 100; num++) {
        if (isPrime(num)) {
            outputFile << num << " ";
        }
    }

    outputFile.close(); // Close the file
    cout << "Prime numbers from 1 through 100 have been saved to 'prime_numbers.txt'." << endl;

    return 0;
}