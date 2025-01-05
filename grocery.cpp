#include <iostream>
#include <iomanip> // for setprecision
using namespace std;

int main() {
    double totalCost = 0.0;
    int option, quantity;

    // Display the menu
    cout << "Grocery Store Menu:\n";
    cout << "1. Apples - $100 per kg\n";
    cout << "2. Bananas - $80 per kg\n";
    cout << "3. Oranges - $120 per kg\n";
    cout << "4. Grapes - $200 per kg\n";
    cout << "5. Mangoes - $150 per kg\n";
    cout << "6. Exit\n";

    cout << "Enter the item number you want to buy (1-6): ";
    cin >> option;

    // Exit if the user selects option 6
    if (option == 6) {
        cout << "Thank you for shopping with us!" << endl;
        return 0; // Exit the program
    }

    cout << "Enter the quantity (in kg): ";
    cin >> quantity;

    double pricePerKg = 0;
    string itemName;

    // Switch-case for item selection and price calculation
    switch(option) {
        case 1:
            pricePerKg = 100;
            itemName = "Apples";
            break;
        case 2:
            pricePerKg = 80;
            itemName = "Bananas";
            break;
        case 3:
            pricePerKg = 120;
            itemName = "Oranges";
            break;
        case 4:
            pricePerKg = 200;
            itemName = "Grapes";
            break;
        case 5:
            pricePerKg = 150;
            itemName = "Mangoes";
            break;
        default:
            cout << "Invalid item option. Exiting.\n";
            return 1; // Exit if invalid option
    }

    // Calculate the total price for the selected item and quantity
    double itemCost = pricePerKg * quantity;
    cout << "You selected " << quantity << " kg of " << itemName << " for $" << itemCost << endl;

    // Add the item cost to the total cost
    totalCost += itemCost;
    cout << fixed << setprecision(2) << "Current total cost: $" << totalCost << endl;

    // Apply discount based on total cost after all purchases
    if (totalCost > 10000) {
        totalCost *= 0.80; // 20% discount
    } else if (totalCost >= 5000) {
        totalCost *= 0.90; // 10% discount
    } else {
        totalCost *= 0.95; // 5% discount
    }

    cout << "Discounted total cost: $" << totalCost << "\n";
    return 0;
}
