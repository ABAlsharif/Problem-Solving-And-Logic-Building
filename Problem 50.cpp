#include <iostream>
using namespace std;

/*Problem 50: Write a Program read the ATM PIN code from the user, then check if PIN code is '1234' 
then show balance to user , otherwise print "Wrong PIN" and ask the user re-enter the PIN code,only allow the user
to enter the PIN code 3 times , if fails print "Card is Locked"
Note: assume user balance is 7500.*/

string ReadPinCode() {

    string PINcode;
    cout << "Please Enter PIN code? \n";
    cin >> PINcode;

    return PINcode;
}

bool Login() {

    string PINcode;
    int Counter = 3;

    do {
        Counter--;
        PINcode = ReadPinCode();

        if (PINcode == "1234") {
            return 1; // This will exit the function and return true.

        }
        else
        {
            system("color 4F"); //turn screen to Red
            cout << "\nWrong PIN, you have " << Counter << " more tries.\n";

        }
    } while (Counter >=1 && PINcode != "1234");

    return 0; //When u Reach here this means login faild.
}

int main() {

    if (Login()) {
        system("color 2F"); //turn screen to green.
        cout << "\n Your account Balance is " << 7500 << endl;
    }
    else {
        cout << "\nYour card blocked call the bank for help.\n";
    }
}
