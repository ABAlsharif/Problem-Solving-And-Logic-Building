#include <iostream>
using namespace std;

/*Problem 47: Write a Program to Read Loan Amount and Monthly Payment and Calculate how many Months 
you need to settle the Loan*/

float ReadPositiveNumber(string Message) {

    float Number = 0;

    do {
        cout << Message << endl;
        cin >> Number;
    } while (Number <= 0);

    return Number;
}

float TotalMonths(float LoanAmount, float MonthlyInstallment) {
    return (float)LoanAmount / MonthlyInstallment;
}

int main() {
    float LoanAmount = ReadPositiveNumber("Please Enter Loan Amount ?");
    float MonthlyInstallment = ReadPositiveNumber("Please Enter  Monthly Installment ?");

    cout << "Total Months to Pay: " << TotalMonths(LoanAmount, MonthlyInstallment) << endl;

}
