#include <iostream>
#include <string>

class Employee {
private:
    std::string name;
    int idNumber;
    std::string department;
    std::string position;

public:
    // Constructor that accepts all values
    Employee(const std::string& empName, int empId, const std::string& empDept, const std::string& empPosition)
        : name(empName), idNumber(empId), department(empDept), position(empPosition) {}

    // Constructor that accepts name and ID, and assigns empty strings to department and position
    Employee(const std::string& empName, int empId)
        : name(empName), idNumber(empId), department(""), position("") {}

    // Default constructor
    Employee()
        : name(""), idNumber(0), department(""), position("") {}

    // Mutator functions to set member variables
    void setName(const std::string& empName) {
        name = empName;
    }

    void setIdNumber(int empId) {
        idNumber = empId;
    }

    void setDepartment(const std::string& empDept) {
        department = empDept;
    }

    void setPosition(const std::string& empPosition) {
        position = empPosition;
    }

    // Accessor functions to get member variable values
    std::string getName() const {
        return name;
    }

    int getIdNumber() const {
        return idNumber;
    }

    std::string getDepartment() const {
        return department;
    }

    std::string getPosition() const {
        return position;
    }
};

int main() {
    Employee employee1("Susan Meyers", 47899, "Accounting", "Vice President");
    Employee employee2("Mark Jones", 39119, "IT", "Programmer");
    Employee employee3("Joy Rogers", 81774, "Manufacturing", "Engineer");

    // Display employee data
    std::cout << "Employee 1 Data:" << std::endl;
    std::cout << "Name: " << employee1.getName() << std::endl;
    std::cout << "ID Number: " << employee1.getIdNumber() << std::endl;
    std::cout << "Department: " << employee1.getDepartment() << std::endl;
    std::cout << "Position: " << employee1.getPosition() << std::endl;
    std::cout << std::endl;

    std::cout << "Employee 2 Data:" << std::endl;
    std::cout << "Name: " << employee2.getName() << std::endl;
    std::cout << "ID Number: " << employee2.getIdNumber() << std::endl;
    std::cout << "Department: " << employee2.getDepartment() << std::endl;
    std::cout << "Position: " << employee2.getPosition() << std::endl;
    std::cout << std::endl;

    std::cout << "Employee 3 Data:" << std::endl;
    std::cout << "Name: " << employee3.getName() << std::endl;
    std::cout << "ID Number: " << employee3.getIdNumber() << std::endl;
    std::cout << "Department: " << employee3.getDepartment() << std::endl;
    std::cout << "Position: " << employee3.getPosition() << std::endl;

    return 0;
}