#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double a, b, c;

    cout << "Enter coefficients a, b and c: ";
    cin >> a >> b >> c;

    // if a is 0, it is not a quadratic equation
    if (a == 0) {
        cout << "Not a quadratic equation (a cannot be 0)." << endl;
        return 0;
    }

    double d = b * b - 4 * a * c;   // discriminant

    if (d > 0) {
        double root1 = (-b + sqrt(d)) / (2 * a);
        double root2 = (-b - sqrt(d)) / (2 * a);
        cout << "Roots are real and different." << endl;
        cout << "Root 1 = " << root1 << endl;
        cout << "Root 2 = " << root2 << endl;
    }
    else if (d == 0) {
        double root = -b / (2 * a);
        cout << "Roots are real and equal." << endl;
        cout << "Root 1 = Root 2 = " << root << endl;
    }
    else {
        double real = -b / (2 * a);
        double imag = sqrt(-d) / fabs(2 * a);
        cout << "Roots are complex." << endl;
        cout << "Root 1 = " << real << " + " << imag << "i" << endl;
        cout << "Root 2 = " << real << " - " << imag << "i" << endl;
    }

    return 0;
}
