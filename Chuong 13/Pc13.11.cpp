#include <iostream>
#include <iomanip>

class PayRoll {
private:
    double hourlyPayRate;
    double hoursWorked;
    double totalPay;

public:
    PayRoll(double payRate = 0.0, double hours = 0.0) : hourlyPayRate(payRate), hoursWorked(hours) {
        calculateTotalPay();
    }

    void setHourlyPayRate(double payRate) {
        hourlyPayRate = payRate;
        calculateTotalPay();
    }

    void setHoursWorked(double hours) {
        if (hours >= 0.0 && hours <= 60.0) {
            hoursWorked = hours;
            calculateTotalPay();
        }
    }

    double getHourlyPayRate() const {
        return hourlyPayRate;
    }

    double getHoursWorked() const {
        return hoursWorked;
    }

    double getTotalPay() const {
        return totalPay;
    }

    void calculateTotalPay() {
        totalPay = hourlyPayRate * hoursWorked;
    }
};

int main() {
    const int numEmployees = 7;
    PayRoll employees[numEmployees];

    for (int i = 0; i < numEmployees; i++) {
        double hours;
        std::cout << "Enter the number of hours worked for employee " << i + 1 << ": ";
        std::cin >> hours;

        if (hours < 0.0 || hours > 60.0) {
            std::cout << "Invalid input for hours worked. Please enter a value between 0 and 60." << std::endl;
            i--;  // Decrement the loop counter to re-enter the hours for this employee
        } else {
            employees[i].setHoursWorked(hours);
        }
    }

    std::cout << "\nEmployee Payroll Information:\n";
    for (int i = 0; i < numEmployees; i++) {
        std::cout << "Employee " << i + 1 << ": Hourly Pay Rate $" << employees[i].getHourlyPayRate()
                  << ", Hours Worked " << employees[i].getHoursWorked() << ", Total Pay $" << employees[i].getTotalPay() << std::endl;
    }

    return 0;
}