#include <iostream>
using namespace std;
int main() {
    double amount, discount, finalAmount;
    cout << "Enter the total shopping amount (Rs): ";
    cin >> amount;
    if (amount <= 5000) {
        discount = 0.05 * amount;
    } else {
        discount = 0.10 * amount;
    }
    finalAmount = amount - discount;
    cout << "Discount Applied: Rs. " << discount << endl;
    cout << "Total Amount after Discount: Rs. " << finalAmount << endl;
    return 0;
}
