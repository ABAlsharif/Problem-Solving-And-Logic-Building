#include <iostream>
using namespace std;

/*Problem 31: write a program ask user enter number then print the number^2,number^3,number^4*/

int ReadNumber() {
    int Number;
    cout << "Please enter a number? " << endl;
    cin >> Number;

    return Number;
}

void PowerOf2_3_4(int Number) {
    int a, b, c;

    a = Number * Number ;
    b = Number * Number * Number;
    c = Number * Number * Number* Number;

    cout << a << " " << b << " " << c << " " << endl;

}
int main()
{
    PowerOf2_3_4(ReadNumber());
}


