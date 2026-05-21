#include <iostream>
using namespace std;

/*Problem 28: write a program to sum Odd numbers from 1 to N*/


enum enOddOrEven { Odd = 1, Even = 2 };

int ReadNumber() {
    int Number;
    cout << "Please Enter a Number? " << endl;
    cin >> Number;

    return Number;
}

enOddOrEven CheckOddOrEven(int Number) {

    if (Number % 2 != 0) {
        return enOddOrEven::Odd;
    }
    else
        return enOddOrEven::Even;
}

int SumOddNumbersFrom1toN_usingWhile(int N) {

    int Counter = 0;
    int Sum = 0;

    cout << "\nSum Odd Numbers using while statment: \n";

    while (Counter < N) {
        Counter++;
        if (CheckOddOrEven(Counter) == enOddOrEven::Odd) {
            Sum += Counter;
        }
    }
    return Sum;
}

int SumOddNumbersFrom1toN_usingDoWhile(int N) {

    int Counter = 0;
    int Sum = 0;

    cout << "\nSum Odd Numbers using Do...while statment: \n";

    do {
        Counter++;
        if (CheckOddOrEven(Counter) == enOddOrEven::Odd) {
            Sum += Counter;
        }
    } while (Counter < N);

    return Sum;
}

int SumOddNumbersFrom1toN_usingFor(int N) {
    int Sum = 0;
    cout << "\nSum Odd Numbers using For statment: \n";

    for (int Counter = 1; Counter <= N; Counter++) {

        if (CheckOddOrEven(Counter) == enOddOrEven::Odd) {
            Sum += Counter;
        }
    }
    return Sum;
}

int main()
{
    int N = ReadNumber();

    cout << SumOddNumbersFrom1toN_usingWhile(N) << endl;
    cout << SumOddNumbersFrom1toN_usingDoWhile(N) << endl;
    cout << SumOddNumbersFrom1toN_usingFor(N) << endl;
}
