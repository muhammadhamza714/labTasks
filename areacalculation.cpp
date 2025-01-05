#include <iostream>
using namespace std;
int main() {
    int length, width, area;
    cout << "Enter the length of the rectangular fence in feet: ";
    cin >> length;
    cout << "Enter the width of the rectangular fence in feet: ";
    cin >> width;
    area = length * width;
    cout << "The area of the rectangular fence is: " << area << " square feet." << endl;
    return 0;
}