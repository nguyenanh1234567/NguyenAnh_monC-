#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int employeeNumber;
    double grossPay, stateTax, federalTax, ficaWithholdings;
    double totalGrossPay = 0, totalStateTax = 0, totalFederalTax = 0, totalFicaWithholdings = 0, totalNetPay = 0;

    cout << "Payroll Report\n";
    cout << "Enter 0 for employee number to quit.\n";

    do {
        cout << "Enter employee number: ";
        cin >> employeeNumber;

        if (employeeNumber == 0) {
            break;
        }

        cout << "Enter gross pay: ";
        cin >> grossPay;

        if (grossPay < 0) {
            cout << "Gross pay cannot be negative. Please re-enter data for this employee.\n";
            continue;
        }

        cout << "Enter state tax: ";
        cin >> stateTax;

        if (stateTax < 0 || stateTax > grossPay) {
            cout << "Invalid state tax amount. Please re-enter data for this employee.\n";
            continue;
        }

        cout << "Enter federal tax: ";
        cin >> federalTax;

        if (federalTax < 0 || federalTax > grossPay) {
            cout << "Invalid federal tax amount. Please re-enter data for this employee.\n";
            continue;
        }

        cout << "Enter FICA withholdings: ";
        cin >> ficaWithholdings;

        if (ficaWithholdings < 0 || ficaWithholdings > grossPay) {
            cout << "Invalid FICA withholdings amount. Please re-enter data for this employee.\n";
            continue;
        }

        totalGrossPay += grossPay;
        totalStateTax += stateTax;
        totalFederalTax += federalTax;
        totalFicaWithholdings += ficaWithholdings;
        totalNetPay += grossPay - stateTax - federalTax - ficaWithholdings;
    } while (employeeNumber != 0);

    cout << fixed << showpoint << setprecision(2);
    cout << "\nPayroll Summary\n";
    cout << "Total Gross Pay: $" << totalGrossPay << endl;
    cout << "Total State Tax: $" << totalStateTax << endl;
    cout << "Total Federal Tax: $" << totalFederalTax << endl;
    cout << "Total FICA Withholdings: $" << totalFicaWithholdings << endl;
    cout << "Total Net Pay: $" << totalNetPay << endl;

    return 0;
}