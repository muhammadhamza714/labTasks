#include <iostream>
using namespace std;
int main() {
    int age;
    int income;
    int loanamount;
    string existingLoan;
    string defaultLast3years;
    cout<< "Enter your age"<<endl;
    cin>> age;
    cout<< "Enter monthly income"<<endl;
    cin>> income;
    cout<< "Enter loan amount requested"<<endl;
    cin>>loanamount;
    cout<< "Do you have any existing loan? (Yes/no)"<<endl;
    cin>> existingLoan;
    cout<< "Any default in last 3 years?"<<endl;
    cin>>defaultLast3years;
    if (age > 21 && age <=60) {
        } if (existingLoan == "no" && defaultLast3years == "no") {
            } if ((loanamount > 500000 && income > 40000) || (loanamount <50000 && income >25000)) {
        cout<< "Loan eligibilty: Approved"<<endl;
            } else {
                cout <<"Loan not approved"<<endl;
            }
    return 0;
}