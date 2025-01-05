#include <iostream>
using namespace std;
int main() {
    int MA1, MA2, MA3;
    cout << "Enter value for a: ";
    cin >> MA1;  // MA1 stores the value of 'a'
    cout << "Enter value for b: ";
    cin >> MA2;  // MA2 stores the value of 'b'
    cout << "Enter value for c: ";
    cin >> MA3;  // MA3 stores the value of 'c'
    MA2 = MA2 + MA3;
    MA1 = MA1 * MA2;
    MA3 = MA1 + MA3;
    cout << "The result of (a * (b + c)) + (c * (a + c)) is: " << MA3 << endl;
    return 0;
}