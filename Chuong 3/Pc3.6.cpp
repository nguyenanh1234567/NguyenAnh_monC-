#include <iostream>
using namespace std;

int main() {
    const int COOKIES_PER_RECIPE = 48;
    const double SUGAR_PER_RECIPE = 1.5;
    const double BUTTER_PER_RECIPE = 1.0;
    const double FLOUR_PER_RECIPE = 2.75;

    int numCookies;

    cout << "Enter the number of cookies you want to make: ";
    cin >> numCookies;

    double scalingFactor = static_cast<double>(numCookies) / COOKIES_PER_RECIPE;

    double sugarNeeded = SUGAR_PER_RECIPE * scalingFactor;
    double butterNeeded = BUTTER_PER_RECIPE * scalingFactor;
    double flourNeeded = FLOUR_PER_RECIPE * scalingFactor;

    cout << "To make " << numCookies << " cookies, you will need the following ingredients:" << endl;
    cout << "Sugar: " << sugarNeeded << " cups" << endl;
    cout << "Butter: " << butterNeeded << " cups" << endl;
    cout << "Flour: " << flourNeeded << " cups" << endl;

    return 0;
}