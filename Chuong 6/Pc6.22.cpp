#include <iostream>
#include <cmath> // Include the cmath library to use the sqrt function
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
    // Check for prime using 6k +/- 1 rule, where k is a positive integer
    for (int i = 5; i * i <= num; i += 6) {
        if (num % i == 0 || num % (i + 2) == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int num;
    
    cout << "Enter an integer to check if it's prime: ";
    cin >> num;
    
    if (isPrime(num)) {
        cout << num << " is a prime number." << endl;
    } else {
        cout << num << " is not a prime number." << endl;
    }
    
    return 0;
}