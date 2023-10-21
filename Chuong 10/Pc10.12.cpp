#include <iostream>
#include <cctype>
using namespace std;

bool isStrongPassword(const string &password) {
    if (password.length() < 6) {
        return false;
    }

    bool hasLower = false;
    bool hasUpper = false;
    bool hasDigit = false;

    for (char ch : password) {
        if (islower(ch)) {
            hasLower = true;
        } else if (isupper(ch)) {
            hasUpper = true;
        } else if (isdigit(ch)) {
            hasDigit = true;
        }
    }

    return hasLower && hasUpper && hasDigit;
}

int main() {
    string password;
    cout << "Enter a password: ";
    cin >> password;

    if (isStrongPassword(password)) {
        cout << "Password is strong." << endl;
    } else {
        cout << "Password is not strong. Please follow the criteria." << endl;
    }

    return 0;
}