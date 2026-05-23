#include <iostream>
using namespace std;

/*Problem 39: write a program read total Bill and cashpaid and calculate reminder thet will be paid back.*/

float ReadPositiveNumber(string Message) {
    float Number = 0;
    do {
        cout << Message << endl;
        cin >> Number;
    } while (Number <= 0);
    return Number;
}
float ReadPositiveNumber(float TotalBill, float TotalCashPaid) {
    return TotalCashPaid - TotalBill;
}
int main() {
    float TotalBill = ReadPositiveNumber("Please Enter Total Bill?");
    float TotalCashPaid = ReadPositiveNumber("Please Enter Total Cash Paid?");

    cout << endl;
    cout << "Total Bill = " << TotalBill << endl;
    cout << "Total Cash Paid = " << TotalCashPaid << endl;

    cout << "*************************\n";
    cout << "Reminder = " << ReadPositiveNumber(TotalBill, TotalCashPaid) << endl;
}
