#include <iostream>
using namespace std;
int main() {
    float highSchoolmarks;
    int satScore;
    cout<< "Enter highSchoolmarks"<<endl;
    cin>> highSchoolmarks;
    cout<< "Enter SAT score"<<endl;
    if(highSchoolmarks < 60) {
        cout<<"Rejected" <<endl;
    } else if (highSchoolmarks >=60 && highSchoolmarks <=75) {
        if (satScore >= 1200) {
            cout <<"Admitted with SAT requirement" <<endl;
        } else {
            cout << "Rejected" <<endl;
        } 
    } else if (highSchoolmarks > 75) {
        cout<<"Admitted"<<endl;
    }
    return 0;
}