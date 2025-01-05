#include <iostream>
using namespace std;

int main() {
    // Declaring variables
    int a, b, c;

    // Input for the three sides
    cout << "Enter the three sides of the triangle: "<<endl;
    cout << "Side A: ";
    cin >> a;
    cout << "Side B: ";
    cin >> b;
    cout << "Side C: ";
    cin >> c;
    // Inequality rule
    if ((a + b > c) && (a + c > b) && (b + c > a)) {
        // Checking the type of triangle
        if (a == b && b == c) {
            cout << "The triangle is Equilateral." << endl; // All sides equal
        } else if (a == b || a == c || b == c) {
            cout << "The triangle is Isosceles." << endl; // Two sides equal
        } else {
            cout << "The triangle is Scalene." << endl; // All sides different
        }
    } else {
        cout << "Invalid Triangle. The sides do not satisfy the triangle inequality." << endl;
    }

    return 0;
}
