#include <iostream>
using namespace std;

int main() {
    for (int code = 0; code <= 127; code++) {
        // Display the character for the ASCII code
        cout << static_cast<char>(code) << " ";

        // Display 16 characters per line
        if ((code + 1) % 16 == 0) {
            cout << endl;
        }
    }

    return 0;
}