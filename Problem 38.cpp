#include <iostream>
using namespace std;

/*Problem 38: write a program read number and check if it's prime number or not*/


enum enPrimNotPrim { Prime = 1, NotPrime = 2 };

float ReadPositiveNumber(string Message) {
    float Number = 0;

    do {
        cout << Message << endl;
        cin >> Number;
    } while (Number <= 0);

    return Number;
}
enPrimNotPrim CheckPrime(int Number) {

    int M = round(Number / 2);

    for (int Counter = 2; Counter <= M; Counter++) {
        if (Number % Counter == 0)
            return enPrimNotPrim::NotPrime;
    }
    return enPrimNotPrim::Prime;
}
void PrintNumberType(int Number) {

    switch (CheckPrime(Number))
    {
    case enPrimNotPrim::Prime:
        cout << "The Number is Prime\n" << endl;
        break;
    case enPrimNotPrim::NotPrime:
        cout << "The Number is Not Prime\n" << endl;
        break;
    }
}

int main() {
    PrintNumberType(ReadPositiveNumber("Please enter a positive Number?"));
}
