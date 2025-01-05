#include <iostream>
using namespace std;
int main() {
    int a, b, c;

    // Input three numbers
    cout << "Enter three numbers (a, b, c): ";
    cin >> a >> b >> c;

    // Check if all numbers are equal
    if (a == b && b == c) {
        cout << "All numbers are equal." << endl;
    } else {
        //Finding the largest number
        if (a >= b) {
            if (a >= c) {
                cout << "The largest number is " << a << "." << endl;
            } else {
                cout << "The largest number is " << c << "." << endl;
            }
        } else {
            if (b >= c) {
                cout << "The largest number is " << b << "." << endl;
            } else {
                cout << "The largest number is " << c << "." << endl;
            }
        }
    }

    return 0;
}
