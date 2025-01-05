#include <iostream>
using namespace std;
int main() {
    float bagSize, bagCost, areaCovered;
    float costPerPound, costPerSquareFoot;
    cout << "Enter the size of the fertilizer bag in pounds: ";
    cin >> bagSize;
    cout << "Enter the cost of the fertilizer bag in dollars: ";
    cin >> bagCost;
    cout << "Enter the area (in square feet) that the bag covers: ";
    cin >> areaCovered;
    costPerPound = bagCost / bagSize;
    costPerSquareFoot = bagCost / areaCovered;
    cout << "\nThe cost of the fertilizer per pound is: $" << costPerPound << endl;
    cout << "The cost of fertilizing per square foot is: $" << costPerSquareFoot << endl;
    return 0;
}