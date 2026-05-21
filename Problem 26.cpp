#include <iostream>
using namespace std;

/*Problem 26: write a program print numbers from 1 to N*/


int ReadNumber() {
    int Number;
    cout << "Please Enter a Number? " << endl;
    cin >> Number;

    return Number;
}

void PrintRange1toN_usingWhile(int N) {

    int Counter = 0;

    cout << "\nRange Printed using while statment: \n";

    while (Counter < N) {
        Counter++;
        cout << Counter << endl;
    }
}

void PrintRange1toN_usingDoWhile(int N) {

    int Counter = 0;

    cout << "\nRange Printed using Do...while statment: \n";

    do {
        Counter++;
        cout << Counter << endl;
    } while (Counter < N);
}

void PrintRange1toN_usingFor(int N) {

    cout << "\nRange Printed using For statment: \n";

    for (int Counter = 1; Counter <= N; Counter++) {

        cout << Counter << endl;
    }
}

int main()
{
    int N = ReadNumber();
    PrintRange1toN_usingWhile(N);
    PrintRange1toN_usingDoWhile(N);
    PrintRange1toN_usingFor(N);
}



