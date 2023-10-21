#include <iostream>
#include <cmath>

class MortgagePayment {
private:
    double loanAmount;
    double annualInterestRate;
    int years;

public:
    MortgagePayment() {
        loanAmount = 0.0;
        annualInterestRate = 0.0;
        years = 0;
    }

    void setLoanAmount(double amount) {
        if (amount > 0) {
            loanAmount = amount;
        }
    }

    void setAnnualInterestRate(double rate) {
        if (rate > 0) {
            annualInterestRate = rate;
        }
    }

    void setYears(int numYears) {
        if (numYears > 0) {
            years = numYears;
        }
    }

    double calculateMonthlyPayment() {
        double monthlyInterestRate = (annualInterestRate / 12.0) / 100.0;
        int numberOfPayments = years * 12;
        double temp = pow((1 + monthlyInterestRate), numberOfPayments);
        double monthlyPayment = (loanAmount * monthlyInterestRate * temp) / (temp - 1);
        return monthlyPayment;
    }

    double calculateTotalAmountPaid() {
        return calculateMonthlyPayment() * (years * 12);
    }
};

int main() {
    MortgagePayment mortgage;

    double loanAmount, annualInterestRate;
    int years;

    std::cout << "Enter the loan amount: $";
    std::cin >> loanAmount;
    mortgage.setLoanAmount(loanAmount);

    std::cout << "Enter the annual interest rate (%): ";
    std::cin >> annualInterestRate;
    mortgage.setAnnualInterestRate(annualInterestRate);

    std::cout << "Enter the number of years: ";
    std::cin >> years;
    mortgage.setYears(years);

    double monthlyPayment = mortgage.calculateMonthlyPayment();
    double totalAmountPaid = mortgage.calculateTotalAmountPaid();

    std::cout << "Monthly Payment: $" << monthlyPayment << std::endl;
    std::cout << "Total Amount Paid: $" << totalAmountPaid << std::endl;

    return 0;
}