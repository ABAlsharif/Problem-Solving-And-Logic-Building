#include <iostream>
using namespace std;

/* problem 4: Write Program ask User to enter his/her:
age
driver licese

then print "Hired" if his/her age is grater than 21 and s/he has driver license , Otherwise print "Rejected"
*/

struct stInfo {
    int Age;
    bool HasDriverLicense;
};

stInfo ReadInfo() {

    stInfo Info;

    cout << "Please Enter Your Age? " << endl;
    cin >> Info.Age;

    cout << "Do You Have Driver License? " << endl;
    cin >> Info.HasDriverLicense;

    return Info;
}


bool IsAccepted(stInfo Info) {

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
