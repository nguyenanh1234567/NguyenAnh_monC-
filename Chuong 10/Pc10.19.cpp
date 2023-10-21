#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

string convertToWords(double amount) {
    string ones[] = { "", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine" };
    string teens[] = { "", "Eleven", "Twelve", "Thirteen", "Fourteen", "Fifteen", "Sixteen", "Seventeen", "Eighteen", "Nineteen" };
    string tens[] = { "", "Ten", "Twenty", "Thirty", "Forty", "Fifty", "Sixty", "Seventy", "Eighty", "Ninety" };

    int dollars = static_cast<int>(amount);
    int cents = static_cast<int>((amount - dollars) * 100);

    string dollarWords;

    if (dollars == 0) {
        dollarWords = "Zero";
    } else {
        int thousands = dollars / 1000;
        int hundreds = (dollars % 1000) / 100;
        int tensDigit = (dollars % 100) / 10;
        int onesDigit = dollars % 10;

        if (thousands > 0) {
            dollarWords += ones[thousands] + " Thousand ";
        }

        if (hundreds > 0) {
            dollarWords += ones[hundreds] + " Hundred ";
        }

        if (tensDigit == 1) {
            if (onesDigit > 0) {
                dollarWords += teens[onesDigit] + " ";
            } else {
                dollarWords += tens[tensDigit] + " ";
            }
        } else {
            dollarWords += tens[tensDigit] + " " + ones[onesDigit] + " ";
        }

        dollarWords += "Dollars";
    }

    string centWords = ones[cents] + " Cents";

    return dollarWords + " and " + centWords;
}

int main() {
    string date, payee;
    double amount;

    cout << "Enter the date (mm/dd/yyyy): ";
    getline(cin, date);
    cout << "Enter the payee's name: ";
    getline(cin, payee);
    
    do {
        cout << "Enter the amount (up to $10,000): ";
        cin >> amount;
    } while (amount < 0 || amount > 10000);

    cout << fixed << setprecision(2);
    cout << " Date: " << date << endl;
    cout << "Pay to the Order of: " << payee << " $" << amount << endl;
    cout << convertToWords(amount) << endl;

    return 0;
}