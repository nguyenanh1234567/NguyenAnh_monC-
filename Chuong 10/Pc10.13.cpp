#include <iostream>
#include <string>
using namespace std;

string monthName(int month) {
    string months[] = { "January", "February", "March", "April", "May", "June",
                        "July", "August", "September", "October", "November", "December" };
    return months[month - 1];
}

int main() {
    string date;
    cout << "Enter a date in mm/dd/yyyy format: ";
    cin >> date;

    int month, day, year;
    sscanf(date.c_str(), "%d/%d/%d", &month, &day, &year);

    string monthStr = monthName(month);
    cout << monthStr << " " << day << ", " << year << endl;

    return 0;
}