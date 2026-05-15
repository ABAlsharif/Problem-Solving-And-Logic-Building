#include <iostream>
using namespace std;

/* problem 3: Write Program Check if the Number Odd Or Even*/

enum enNumberType { Odd = 1, Even = 2 };

int ReadNumber() {

    int Num;

    cout << "Please Enter Your Number? " << endl;

    cin >> Num;

    return Num;
}

enNumberType CheckNumberType(int Num) {

    int Result = Num % 2;

    if (Result == 0)

        return enNumberType::Even;

    else

        return enNumberType::Odd;


}

void PrintNumberType(enNumberType NumberType) {

    if (NumberType == enNumberType::Even)

        cout << "The Number is Even." << endl;

    else

        cout << "The Number is Odd." << endl;

}

int main() {

    PrintNumberType(CheckNumberType(ReadNumber()));
}

