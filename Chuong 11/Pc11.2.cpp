#include <iostream>
#include <string>
using namespace std;

struct MovieData {
    string title;
    string director;
    int yearReleased;
    int runningTime;
    double productionCost;
    double firstYearRevenue;
};

void displayMovieProfit(MovieData movie) {
    cout << "Title: " << movie.title << endl;
    cout << "Director: " << movie.director << endl;
    cout << "Year Released: " << movie.yearReleased << endl;
    cout << "Running Time (minutes): " << movie.runningTime << endl;
    cout << "First Year's Profit/Loss: $" << (movie.firstYearRevenue - movie.productionCost) << endl;
}

int main() {
    MovieData movie1 = {"Movie 1", "Director 1", 2020, 120, 5000000, 6000000};
    MovieData movie2 = {"Movie 2", "Director 2", 2019, 110, 4500000, 4000000};

    cout << "Movie 1 Information:\n";
    displayMovieProfit(movie1);
    cout << "\nMovie 2 Information:\n";
    displayMovieProfit(movie2);

    return 0;
}