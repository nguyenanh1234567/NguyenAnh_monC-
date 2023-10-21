#include <iostream>
using namespace std;

const int NUM_MONKEYS = 3;
const int NUM_DAYS = 5;

int main() {
    int foodEaten[NUM_MONKEYS][NUM_DAYS];
    double totalFood = 0;
    int leastFood = INT_MAX;
    int greatestFood = INT_MIN;

    // Input food eaten by each monkey
    for (int i = 0; i < NUM_MONKEYS; i++) {
        cout << "Enter pounds of food eaten by Monkey " << (i + 1) << " for each day of the week:" << endl;
        for (int j = 0; j < NUM_DAYS; j++) {
            cin >> foodEaten[i][j];
            while (foodEaten[i][j] < 0) {
                cout << "Please enter a non-negative value: ";
                cin >> foodEaten[i][j];
            }
            totalFood += foodEaten[i][j];
            if (foodEaten[i][j] < leastFood) {
                leastFood = foodEaten[i][j];
            }
            if (foodEaten[i][j] > greatestFood) {
                greatestFood = foodEaten[i][j];
            }
        }
    }

    // Calculate the average food eaten per day by the monkeys
    double averageFood = totalFood / (NUM_MONKEYS * NUM_DAYS);

    cout << "Average food eaten per day by the whole family of monkeys: " << averageFood << " pounds" << endl;
    cout << "Least amount of food eaten during the week by any one monkey: " << leastFood << " pounds" << endl;
    cout << "Greatest amount of food eaten during the week by any one monkey: " << greatestFood << " pounds" << endl;

    return 0;
}