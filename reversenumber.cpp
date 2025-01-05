#include <iostream>
using namespace std;
int main() {
    int number, reversednumber = 0;
    cout << "Enter a number: ";
    cin >> number;
    while (number != 0) {
        int lastdigit = number % 10;
        reversednumber = reversednumber * 10 + lastdigit;
        number = number / 10;
    }
    cout << "Reversed number: " << reversednumber << endl;
    return 0;
}