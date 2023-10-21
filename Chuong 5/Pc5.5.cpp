#include <iostream>
using namespace std;

int main() {
    double membershipFee = 2500.0; // Initial membership fee
    const double increaseRate = 0.04; // 4% increase rate

    cout << "Year\tMembership Fee" << endl;
    cout << "-------------------" << endl;

    for (int year = 1; year <= 6; year++) {
        membershipFee += membershipFee * increaseRate; // Calculate the new membership fee
        cout << year << "\t$" << membershipFee << endl;
    }

    return 0;
}