#include <iostream>
using namespace std;

/* problem 5: Write Program ask User to enter his/her:
age
driver licese

then print "Hired" if his/her age is grater than 21 and s/he has driver license , Otherwise print "Rejected"
OR
Hire him/her without conditions.*/

struct stInfo {
    int Age;
    bool HasDriverLicense;
    bool HasRecommindation;
};

stInfo ReadInfo() {

    stInfo Info;

    cout << "Please Enter Your Age? " << endl;
    cin >> Info.Age;

    cout << "Do You Have Driver License? " << endl;
    cin >> Info.HasDriverLicense;

    cout << "Do You Have Recommindation? " << endl;
    cin >> Info.HasRecommindation;

    return Info;
}


bool IsAccepted(stInfo Info) {
    if (Info.HasRecommindation)
        return true;
    else
        return (Info.Age > 21 && Info.HasDriverLicense);

}

void PrintResult(stInfo Info) {

    if (IsAccepted(Info))
        cout << "\n Hired " << endl;
    else
        cout << "\n Rejected " << endl;

}


int main() {

    PrintResult(ReadInfo());
}
