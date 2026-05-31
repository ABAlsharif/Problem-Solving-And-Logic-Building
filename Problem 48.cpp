#include <iostream>
using namespace std;

/*Problem 48: Write a Program to Read Loan Amount and ask you how many Months you need to settle the Loan
the Calculate the installment amount.*/


float ReadPositiveNumber(string Message) {

    float Number = 0;

    do {
        cout << Message << endl;
        cin >> Number;
    } while (Number <= 0);

    return Number;
}

float MonthlyInstallment(float LoanAmount, float HowManyMonths) {
    return (float)LoanAmount / HowManyMonths;
}

int main() {
    float LoanAmount = ReadPositiveNumber("Please Enter Loan Amount ?");
    float HowManyMonths = ReadPositiveNumber("Please Enter How Many Months ?");

    cout << "Total Months to Pay: " << MonthlyInstallment(LoanAmount, HowManyMonths) << endl;
}
