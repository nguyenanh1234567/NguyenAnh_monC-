#include <iostream>
#include <stdexcept>

class Population {
private:
    int population;
    int numBirths;
    int numDeaths;

public:
    Population(int pop, int births, int deaths) {
        if (pop < 1 || births < 0 || deaths < 0) {
            throw std::invalid_argument("Invalid population, birth, or death numbers.");
        }

        population = pop;
        numBirths = births;
        numDeaths = deaths;
    }

    double getBirthRate() const {
        return static_cast<double>(numBirths) / population;
    }

    double getDeathRate() const {
        return static_cast<double>(numDeaths) / population;
    }
};

int main() {
    int population, births, deaths;

    try {
        // Input population, births, and deaths with validation
        std::cout << "Enter the population: ";
        std::cin >> population;
        if (population < 1) {
            throw std::invalid_argument("Invalid population number.");
        }

        std::cout << "Enter the number of births: ";
        std::cin >> births;
        if (births < 0) {
            throw std::invalid_argument("Invalid number of births.");
        }

        std::cout << "Enter the number of deaths: ";
        std::cin >> deaths;
        if (deaths < 0) {
            throw std::invalid_argument("Invalid number of deaths.");
        }

        // Create a Population object and calculate rates
        Population populationData(population, births, deaths);

        // Display birth rate and death rate
        std::cout << "Birth Rate: " << populationData.getBirthRate() << std::endl;
        std::cout << "Death Rate: " << populationData.getDeathRate() << std::endl;
    } catch (const std::invalid_argument& e) {
        std::cerr << "Error: " << e.what() << std::endl;
    }

    return 0;
}