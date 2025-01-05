#include <iostream>
using namespace std;

int main() {
    // Input student details
    string name;
    cout << "student name: ";
    cin >> name;
    
    string email;
    cout << "student email: ";
    cin >> email;
    
    int previousRecord;
    cout << "student previous record: ";
    cin >> previousRecord;
    
    string preference;
    cout << "Enter preference (BSCS, AI, Law): ";
    cin >> preference;

    // Check criteria for preferences directly
    if (previousRecord >= 50) {
        cout << "Eligible for seat" << endl;
        
        float preference1;
        cout << "Enter your marks for fsc BSCS Criteria (minimum 60 required): " << endl;
        cin >> preference1;

        if (preference1 >= 60) {
            cout << "Admission Allocated in BSCS" << endl;
        } else {
            cout << "Not allocated in BSCS due to merit" << endl; 

            float preference2;
            cout << "Enter your marks for AI criteria (Minimum 60 required): " << endl;
            cin >> preference2;

            if (preference2 >= 60) {
                cout << "Admission Allocated in AI" << endl;
            } else {
                cout << "Not allocated in AI due to merit" << endl;

                float Preference3;
                cout << "Enter your marks for LAW criteria (Minimum 50 required): " << endl;
                cin >> Preference3;

                if (Preference3 >= 50) {
                    cout << "Admission allocated in LAW" << endl;
                } else {
                    cout << "Not allocated in LAW due to merit" << endl;
                }
            }
        }
    }

    return 0;
}
