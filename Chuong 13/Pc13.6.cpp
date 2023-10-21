#include <iostream>

class Inventory {
private:
    int itemNumber;
    int quantity;
    double cost;
    double totalCost;

public:
    // Default constructor
    Inventory() : itemNumber(0), quantity(0), cost(0.0) {
        setTotalCost();
    }

    // Constructor #2
    Inventory(int itemNum, double itemCost, int itemQuantity) {
        if (itemNum >= 0 && itemCost >= 0 && itemQuantity >= 0) {
            itemNumber = itemNum;
            cost = itemCost;
            quantity = itemQuantity;
            setTotalCost();
        } else {
            std::cout << "Error: Invalid values for item number, cost, or quantity." << std::endl;
            itemNumber = 0;
            cost = 0.0;
            quantity = 0;
            setTotalCost();
        }
    }

    void setItemNumber(int num) {
        if (num >= 0) {
            itemNumber = num;
        } else {
            std::cout << "Error: Item number cannot be negative." << std::endl;
        }
    }

    void setQuantity(int itemQuantity) {
        if (itemQuantity >= 0) {
            quantity = itemQuantity;
            setTotalCost();
        } else {
            std::cout << "Error: Quantity cannot be negative." << std::endl;
        }
    }

    void setCost(double itemCost) {
        if (itemCost >= 0) {
            cost = itemCost;
            setTotalCost();
        } else {
            std::cout << "Error: Cost cannot be negative." << std::endl;
        }
    }

    void setTotalCost() {
        totalCost = cost * quantity;
    }

    int getItemNumber() const {
        return itemNumber;
    }

    int getQuantity() const {
        return quantity;
    }

    double getCost() const {
        return cost;
    }

    double getTotalCost() const {
        return totalCost;
    }
};

int main() {
    // Create an Inventory object with default values
    Inventory item1;

    // Display default values
    std::cout << "Item #1 - Default Values:" << std::endl;
    std::cout << "Item Number: " << item1.getItemNumber() << std::endl;
    std::cout << "Quantity: " << item1.getQuantity() << std::endl;
    std::cout << "Cost: $" << item1.getCost() << std::endl;
    std::cout << "Total Cost: $" << item1.getTotalCost() << std::endl;

    // Create an Inventory object with specific values
    Inventory item2(1001, 15.95, 50);

    // Display specific values
    std::cout << std::endl;
    std::cout << "Item #2 - Specific Values:" << std::endl;
    std::cout << "Item Number: " << item2.getItemNumber() << std::endl;
    std::cout << "Quantity: " << item2.getQuantity() << std::endl;
    std::cout << "Cost: $" << item2.getCost() << std::endl;
    std::cout << "Total Cost: $" << item2.getTotalCost() << std::endl;

    // Attempt to set negative values (validation)
    item2.setItemNumber(-1);
    item2.setQuantity(-10);
    item2.setCost(-5.5);

    return 0;
}