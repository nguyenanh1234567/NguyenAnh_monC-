#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
    double angleInRadians;
    
    cout << "Enter an angle in radians: ";
    cin >> angleInRadians;
    
    // Calculate sine, cosine, and tangent
    double sine = sin(angleInRadians);
    double cosine = cos(angleInRadians);
    double tangent = tan(angleInRadians);
    
    // Display the results with fixed-point notation and four decimal places
    cout << fixed << setprecision(4);
    cout << "Sine: " << sine << endl;
    cout << "Cosine: " << cosine << endl;
    cout << "Tangent: " << tangent << endl;
    
    return 0;
}