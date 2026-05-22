// Ptoblem 30.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

/*Problem 30: write a program Calculate Factorial of N*/

int ReadPositiveNumber(string Message) {
    int Number;
    do {
        cout << Message << endl;
        cin >> Number;

    } while (Number < 0);

    return Number;
}

int Factorial(int N) {
    int F = 1;

    for (int Counter = N; Counter >= 1; Counter--) {
        F = F * Counter;
    }
    return F;
}

int main() {
    cout << Factorial(ReadPositiveNumber("Please Enter an Psitive Number? "));
}
