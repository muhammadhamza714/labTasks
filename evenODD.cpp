#include <iostream>
using namespace std;

int main() {
    //Variable
    int number;
    string result;
    // Input from user
    cout << "Enter a number: ";
    cin >> number;

    // Check odd or even
    if (number % 2 == 0) {
        cout<< "The number is Even."<<endl;
    } else {
        cout<< "The number is Odd."<<endl;
    }

    // Output result
    cout << result << endl;

    return 0;
}
