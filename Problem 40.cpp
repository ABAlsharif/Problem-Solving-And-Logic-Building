#include <iostream>
using namespace std;

/*Problem 40: resturant charges 10% services fee and 16% fee and sales tax.Write program to read a Bill value and add service fee and sales tax
to it, and print the total Bill.*/


float ReadPositiveNumber(string Message) {
    float Number = 0;
    do {
        cout << Message << endl;
        cin >> Number;
    } while (Number <= 0);
    return Number;
}
float TotalBillAfterServiceAndTax(float TotalBill) {

    TotalBill = TotalBill * 1.1;
    TotalBill = TotalBill * 1.16;

    return TotalBill;
}

int main() {

    float TotalBill = ReadPositiveNumber("Please Enter Total Bill? ");

    cout << endl;
    cout << "Total Bill = " << TotalBill << endl;
    cout << "Total Bill After Service Fee and Sales Tax = "
        << TotalBillAfterServiceAndTax(TotalBill) << endl;
}
