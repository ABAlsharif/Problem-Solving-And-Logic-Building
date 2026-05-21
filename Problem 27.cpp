#include <iostream>
using namespace std;

/*Problem 27: write a program print numbers from N to 1*/


int ReadNumber() {
    int Number;
    cout << "Please Enter a Number? " << endl;
    cin >> Number;

    return Number;
}

void PrintRangeFromNto1_usingWhile(int N) {

    int Counter = N + 1;

    cout << "\nRange Printed using while statment: \n";

    while (Counter > 1) {
        Counter--;
        cout << Counter << endl;
    }
}

void PrintRangeFromNto1_usingDoWhile(int N) {

    int Counter = N + 1;

    cout << "\nRange Printed using Do...while statment: \n";

    do {
        Counter--;
        cout << Counter << endl;
    } while (Counter > 1);
}

void PrintRangeFromNto1_usingFor(int N) {

    cout << "\nRange Printed using For statment: \n";

    for (int Counter = N; Counter >= 1; Counter--) {

        cout << Counter << endl;
    }
}

int main()
{
    int N = ReadNumber();
    PrintRangeFromNto1_usingWhile(N);
    PrintRangeFromNto1_usingDoWhile(N);
    PrintRangeFromNto1_usingFor(N);
}

