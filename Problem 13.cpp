#include <iostream>
using namespace std;

/*Problem 13: Write a Program ask the user enter Number1,Number2,Number3 then print The Maximum Number*/

void ReadNumbers(int& Num1, int& Num2,int& Num3) {

    cout << "Please Enter Your Num1? " << endl;
    cin >> Num1;

    cout << "Please Enter Your Num2? " << endl;
    cin >> Num2;

    cout << "Please Enter Your Num3? " << endl;
    cin >> Num3;

}

int MaxOf3Numbers(int Num1,int Num2,int Num3) {

    if (Num1 > Num2)
        if (Num1 > Num3)
            return Num1;
        else
            return Num3;

    else
        if (Num2 > Num3)
            return Num2;
        else
            return Num3;

}

void PrintResults(int Max) {
    cout << "\n The Maximum Number is: " << Max << endl;
}

int main() {
    int Num1, Num2,Num3;
    ReadNumbers(Num1, Num2,Num3);
    PrintResults(MaxOf3Numbers(Num1, Num2,Num3));
}


