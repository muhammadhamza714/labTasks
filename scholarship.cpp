#include <iostream>
using namespace std;
int main() {
    float percentageOfMarks;
    float familyIncome;
    string extraCurricularParticipation;
    cout << "Enter the percentage of marks: ";
    cin >> percentageOfMarks;
    cout << "Enter the family income (in Rs.): ";
    cin >> familyIncome;
    cout << "Did the student participate in extracurricular activities? (yes/no): ";
    cin >> extraCurricularParticipation;
    if (percentageOfMarks >= 80) {
        if (percentageOfMarks > 90) {
            if (familyIncome < 50000) {
                cout << "Full Scholarship" << endl;
            } else if (familyIncome >= 50000 && familyIncome <= 100000) {
                cout << "Half Scholarship" << endl;
            } else {
                cout << "No Scholarship" << endl;
            }
        } else if (percentageOfMarks >= 80 && percentageOfMarks <= 90) {
            if (extraCurricularParticipation == "yes") {
                cout << "Partial Scholarship" << endl;
            } else {
                cout << "No Scholarship" << endl;
            }
        }
    } else {
        cout << "No Scholarship" << endl;
    }

    return 0;
}