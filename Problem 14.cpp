#include <iostream>
using namespace std;

/*Problem 14: Write a Program ask the user enter Number1,Number2 then Print The Two Numbers then Swap The two Numbers and Print Them*/


void ReadNumbers(int& Num1, int& Num2) {

    cout << "Please Enter Your Num1? " << endl;
    cin >> Num1;

    cout << "Please Enter Your Num2? " << endl;
    cin >> Num2;

}

void Swap(int& Num1, int& Num2) {
    int Temp;

    Temp = Num1;
    Num1 = Num2;
    Num2 = Temp;
}

void PrintNumbers(int Num1,int Num2) {
    cout << "\n The  Number 1 is: " << Num1 << endl;

    cout << " The  Number 2 is: " << Num2 << endl;
}

int main() {

    int Num1, Num2;
    ReadNumbers(Num1, Num2);
    PrintNumbers(Num1,Num2);
    Swap(Num1,Num2);
    PrintNumbers(Num1, Num2);
}
