#include <iostream>
#include <string>
using namespace std;

struct MovieData {
    string title;
    string director;
    int yearReleased;
    int runningTime;
};

void displayMovieInfo(MovieData movie) {
    cout << "Title: " << movie.title << endl;
    cout << "Director: " << movie.director << endl;
    cout << "Year Released: " << movie.yearReleased << endl;
    cout << "Running Time (minutes): " << movie.runningTime << endl;
}

int main() {
    MovieData movie1 = {"Movie 1", "Director 1", 2020, 120};
    MovieData movie2 = {"Movie 2", "Director 2", 2019, 110};

    cout << "Movie 1 Information:\n";
    displayMovieInfo(movie1);
    cout << "\nMovie 2 Information:\n";
    displayMovieInfo(movie2);

    return 0;
}