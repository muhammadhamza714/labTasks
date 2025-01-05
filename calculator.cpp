#include <iostream>
using namespace std;

int main() {
    // Variable declarations
    int num1, num2;
    char operation;
    int result;

    // User inputs
    cout << "Enter first number (num1): ";
    cin >> num1;
    cout << "Select operation (+, -, *, /, %): ";
    cin >> operation;
    cout << "Enter second number (num2): ";
    cin >> num2;

    // Switch case for operations
    switch (operation) {
        case '+':
            result = num1 + num2;
            cout << "The result is " << result << ".\n";
            break;
        case '-':
            result = num1 - num2;
            cout << "The result is " << result << ".\n";
            break;
        case '*':
            result = num1 * num2;
            cout << "The result is " << result << ".\n";
            break;
        case '/':
            if (num2 == 0) {
                cout << "Division by zero is not allowed.\n";
            } else {
                result = num1 / num2;
                cout << "The result is " << result << ".\n";
            }
            break;
        case '%':
            if (num2 == 0) {
                cout << "Division by zero is not allowed for modulus operation.\n";
            } else {
                result = num1 % num2;
                cout << "The result is " << result << ".\n";
            }
            break;
        default:
            cout << "Invalid operator.\n";
            break;
    }

    return 0;
}
