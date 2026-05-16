#include <iostream>
using namespace std;

/*Problem 9: Write a Program ask the user enter num1,num2,num3 then print sum of entered numbers*/

void ReadNums(int& num1, int& num2, int& num3) {

    cout << "Please Enter The First Number? " << endl;
    cin >> num1;

    cout << "Please Enter The Seconed Number? " << endl;
    cin >> num2;

    cout << "Please Enter The Third Number? " << endl;
    cin >> num3;
}

int SumOf3Numbers(int num1, int num2, int num3) {
    return num1 + num2 + num3;
}

void PrintResults(int Total) {
    cout << "\nThe Total Sum Of 3 Numbers Is " << Total << endl;
}

int main() {
    int num1, num2, num3;
    ReadNums(num1,num2,num3);
    PrintResults(SumOf3Numbers(num1, num2, num3));
}

