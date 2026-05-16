#include <iostream>
#include <string>
using namespace std;

/*Problem 7: Write Program ask the user to enter a Number then print thr "Half of" the <Number> is <???>*/

int ReadNumber() {
    int Num;

    cout << "Could u Please Enter The Number? " << endl;
    cin >> Num;

    return Num;
}
float CalculateHalfNumber(int Num) {
    return (float)Num / 2;
}
void PrintResults(int Num) {

    string Result = "Half of " + to_string(Num) + " Is " + to_string(CalculateHalfNumber(Num));
    cout << Result << endl;

}

int main() {

    PrintResults(ReadNumber());
}

