#include <iostream>
using namespace std;

/*Problem 12: Write a Program ask the user enter Number1,Number2 then print The Maximum Number*/

void ReadNumbers(int& Num1, int& Num2) {

    cout << "Please Enter Your Num1? " << endl;
    cin >> Num1;

    cout << "Please Enter Your Num2? " << endl;
    cin >> Num2;

}

int MaxOf2Numbers(int Num1,int Num2) {

    if (Num1 > Num2)
        return Num1;
    else
        return Num2;

}

void PrintResults(int Max) {
    cout << "\n The Maximum Number is: " << Max << endl;
}

int main() {
    int Num1, Num2;
    ReadNumbers(Num1, Num2);
    PrintResults(MaxOf2Numbers(Num1, Num2));
} 
