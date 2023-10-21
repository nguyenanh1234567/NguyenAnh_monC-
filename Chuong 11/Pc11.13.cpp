#include <iostream>
#include <iomanip>
using namespace std;

struct Drink {
    string name;
    double cost;
    int quantity;
};

int main() {
    Drink machine[5] = {{"Cola", 0.75, 20}, {"Root Beer", 0.75, 20}, {"Lemon-Lime", 0.75, 20}, {"Grape Soda", 0.80, 20}, {"Cream Soda", 0.80, 20}};
    double totalEarned = 0.0;

    while (true) {
        cout << "Welcome to the Drink Machine! Choose a drink or enter 'q' to quit:\n";
        for (int i = 0; i < 5; i++) {
            cout << i + 1 << ". " << machine[i].name << " - $" << machine[i].cost << " (" << machine[i].quantity << " left)\n";
        }

        char choice;
        cin >> choice;

        if (choice == 'q') {
            break;
        }

        int drinkIndex = choice - '0' - 1;
        if (drinkIndex >= 0 && drinkIndex < 5) {
            if (machine[drinkIndex].quantity > 0) {
                double moneyInserted;
                cout << "Insert money (in dollars): ";
                cin >> moneyInserted;
                if (moneyInserted >= 0 && moneyInserted <= 1.00) {
                    cout << "You have purchased a " << machine[drinkIndex].name << ".\n";
                    machine[drinkIndex].quantity--;
                    totalEarned += machine[drinkIndex].cost;
                    if (moneyInserted > machine[drinkIndex].cost) {
                        cout << "Change: $" << setprecision(2) << moneyInserted - machine[drinkIndex].cost << endl;
                    }
                } else {
                    cout << "Invalid amount inserted. Must be between 0 and 1 dollar.\n";
                }
            } else {
                cout << "Sorry, " << machine[drinkIndex].name << " is sold out.\n";
            }
        } else {
            cout << "Invalid choice. Please select a drink from 1 to 5 or 'q' to quit.\n";
        }
    }

    cout << "Total earnings: $" << setprecision(2) << totalEarned << endl;
    return 0;
}