#include <iostream>
using namespace std;

/*Problem 29: write a program to sum Even numbers from 1 to N */

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

int SumEvenNumbersFrom1toN_usingWhile(int N) {

    int Counter = 0;
    int Sum = 0;

    cout << "\nSum Even Numbers using while statment: \n";

    while (Counter < N) {
        Counter++;
        if (CheckOddOrEven(Counter) == enOddOrEven::Even) {
            Sum += Counter;
        }
    }
    return Sum;
}

int SumEvenNumbersFrom1toN_usingDoWhile(int N) {

    int Counter = 0;
    int Sum = 0;

    cout << "\nSum Even Numbers using Do...while statment: \n";

    do {
        Counter++;
        if (CheckOddOrEven(Counter) == enOddOrEven::Even) {
            Sum += Counter;
        }
    } while (Counter < N);

    return Sum;
}

int SumEvenNumbersFrom1toN_usingFor(int N) {
    int Sum = 0;
    cout << "\nSum Even Numbers using For statment: \n";

    for (int Counter = 1; Counter <= N; Counter++) {

        if (CheckOddOrEven(Counter) == enOddOrEven::Even) {
            Sum += Counter;
        }
    }
    return Sum;
}

int main()
{
    int N = ReadNumber();

    cout << SumEvenNumbersFrom1toN_usingWhile(N) << endl;
    cout << SumEvenNumbersFrom1toN_usingDoWhile(N) << endl;
    cout << SumEvenNumbersFrom1toN_usingFor(N) << endl;
}

