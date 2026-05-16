#include <iostream>
using namespace std;

/*Problem 6: Write Program ask the user to enter his/her First Name and Last Name then Print Full Name
*/

struct stInfo {
    string FirstName;
    string LastName;
};

stInfo ReadInfo() {
    stInfo Info;

    cout << "Please Enter Your First Name? " << endl;
    cin >> Info.FirstName;

    cout << "Please Enter Your Last Name? " << endl;
    cin >> Info.LastName;

    return Info;

}

string GetFullName(stInfo Info, bool Reversed) {

    string FullName = "";

    if (Reversed)
        return FullName = Info.LastName + " " + Info.FirstName;
    else
        return FullName = Info.FirstName + " " + Info.LastName;

    return FullName;

}

void PrintFullName(string FullName) {

    cout << "\nYour Full Name Is: " << FullName << endl;
}

int main()
{
    PrintFullName(GetFullName(ReadInfo(), true));
}



