#include <iostream>
using namespace std;

int main() {
    // Constants
    const int COOKIES_PER_BAG = 30;
    const int SERVINGS_PER_BAG = 10;
    const int CALORIES_PER_SERVING = 300;

    // Variables
    int cookiesEaten;
    int totalCalories;

    // Input
    cout << "Enter the number of cookies you ate: ";
    cin >> cookiesEaten;

    // Calculate the total calories consumed
    totalCalories = (cookiesEaten * CALORIES_PER_SERVING) / SERVINGS_PER_BAG;

    // Display the result
    cout << "Total calories consumed: " << totalCalories << " calories" << endl;

    return 0;
}