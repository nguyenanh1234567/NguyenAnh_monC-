#ifndef ACCOUNT_H
#define ACCOUNT_H

class Account
{
private:
    double balance;        // Account balance
    double interestRate;   // Interest rate for the period
    double interest;       // Interest earned for the period
    int transactions;      // Number of transactions

public:
    // Constructor with default values for interest rate and balance
    Account(double iRate = 0.045, double bal = 0)
    {
        balance = bal;
        interestRate = iRate;
        interest = 0;
        transactions = 0;
    }

    // Setter method for interest rate
    void setInterestRate(double iRate)
    {
        interestRate = iRate;
    }

    // Method to make a deposit
    void makeDeposit(double amount)
    {
        balance += amount;
        transactions++;
    }

    // Method to withdraw, defined in Account.cpp (implementation file)
    void withdraw(double amount);

    // Method to calculate interest
    void calcInterest()
    {
        interest = balance * interestRate;
        balance += interest;
    }

    // Getter methods for various account information
    double getInterestRate() const
    {
        return interestRate;
    }

    double getBalance() const
    {
        return balance;
    }

    double getInterest() const
    {
        return interest;
    }

    int getTransactions() const
    {
        return transactions;
    }
};

#endif