#include <iostream>
using namespace std;
int main() {
    int initialVelocity, acceleration, time, finalVelocity;
    cout << "Enter the initial velocity of the car (in meters per second): ";
    cin >> initialVelocity;
    cout << "Enter the acceleration of the car (in meters per second squared): ";
    cin >> acceleration;
    cout << "Enter the time during which the car accelerates (in seconds): ";
    cin >> time;
    finalVelocity = initialVelocity + acceleration * time;
    cout << "The final velocity of the car is: " << finalVelocity << " meters per second." << endl;
    return 0;
}