#include <iostream>
using namespace std;

/*Problem 32: write a program ask user enter number,M(which is the power) then print the number^M*/

int ReadNumber() {

    int Number;
    cout << "Please enter a number? " << endl;
    cin >> Number;

    return Number;
}

int ReadPower() {

    int Number;
    cout << "Please enter a Power? " << endl;
    cin >> Number;

    return Number;
}


int PowerOfM(int Number,int M) {

    if (M == 0) {
        return 1;
    }

    int P = 1;

    for (int i = 1; i <= M; i++) {
        P = P * Number;
    }

    return P;

}
int main()
{
    int Num = PowerOfM(ReadNumber(), ReadPower());
    cout << endl << "Result = " << Num;
}

