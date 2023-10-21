#include <iostream>
#include <string>

class Date {
private:
    int month;
    int day;
    int year;

public:
    Date(int m, int d, int y) : month(m), day(d), year(y) {}

    // Member function to print the date in the format MM/DD/YYYY
    void print1() const {
        std::cout << month << '/' << day << '/' << year << std::endl;
    }

    // Member function to print the date in the format Month DD, YYYY
    void print2() const {
        const std::string months[] = {
            "January", "February", "March", "April", "May", "June", "July",
            "August", "September", "October", "November", "December"
        };
        std::cout << months[month - 1] << ' ' << day << ", " << year << std::endl;
    }

    // Member function to print the date in the format DD Month YYYY
    void print3() const {
        const std::string months[] = {
            "January", "February", "March", "April", "May", "June", "July",
            "August", "September", "October", "November", "December"
        };
        std::cout << day << ' ' << months[month - 1] << ' ' << year << std::endl;
    }

    // Input validation for day and month
    bool isValidDate() const {
        return (month >= 1 && month <= 12) && (day >= 1 && day <= 31);
    }
};

int main() {
    int month, day, year;

    std::cout << "Enter a date (month day year): ";
    std::cin >> month >> day >> year;

    Date date(month, day, year);

    if (date.isValidDate()) {
        date.print1();
        date.print2();
        date.print3();
    } else {
        std::cout << "Invalid date. Please enter valid month and day values." << std::endl;
    }

    return 0;
}