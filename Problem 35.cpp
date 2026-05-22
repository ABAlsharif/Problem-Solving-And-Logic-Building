#include <iostream>
using namespace std;

/*Problem 35: write program ask user enter Pennies , Nickles, Dimes , Quarters , Dollars and then calculate the total Pennies ,
total Dollars and print them giving that
penny = 1 , Nickle = 5 , Dime = 10 , Quarter = 25 , Dollar = 100
*/

struct stPiggyBankContent {
    int Pennies, Nickels, Dimes, Quarters, Dollars;
};
stPiggyBankContent ReadPiggyBankContent() {
    stPiggyBankContent PiggyBankContent;

    cout << "Please enter a Total Pennies? " << endl;
    cin >> PiggyBankContent.Pennies;
    cout << "Please enter a Total Nickels? " << endl;
    cin >> PiggyBankContent.Nickels;
    cout << "Please enter a Total Dimes? " << endl;
    cin >> PiggyBankContent.Dimes;
    cout << "Please enter a Total Quarters? " << endl;
    cin >> PiggyBankContent.Quarters;
    cout << "Please enter a Total Dollars? " << endl;
    cin >> PiggyBankContent.Dollars;

    return PiggyBankContent;

}

int CalculatePiggyBankContent(stPiggyBankContent PiggyBankContent) {
    int TotalPennies = 0;

    TotalPennies = PiggyBankContent.Pennies * 1 + PiggyBankContent.Nickels * 5 +
        PiggyBankContent.Dimes * 10 + PiggyBankContent.Quarters * 25 +
        PiggyBankContent.Dollars * 100;

    return TotalPennies;
}

int main() {
    int TotalPennies = CalculatePiggyBankContent(ReadPiggyBankContent());
    cout << endl << "Total Pennies = " << TotalPennies << endl;
    cout << endl << "Total Dollars = " << (float)TotalPennies/100 << endl;

}