#include <iostream>
using namespace std;

/*Problem 45: write a program ask user to enter: Month
then Print The Follows:
1 print January
2 print February
3 print March
4 print April
5 print May
6 print June
7 print July
8 print August
9 print September
10 print October
11 print November
12 print December
Otherwise Print "Wrong Month!" and ask the user to enter the Month again.*/

enum enMonthOfYear{Jan=1,Feb=2,Mar=3,Apr=4,May=5,Jun=6,
                   Jul=7,Aug=8,Sep=9,Oct=10,Nov=11,Dec=12};

int ReadNumberInRange(string Message, int From, int To) {
    int Number = 0;

    do {
        cout << Message << endl;
        cin >> Number;
    } while (Number<From || Number>To);

    return Number;
}

enMonthOfYear ReadMonthOfYear() {
    return (enMonthOfYear)ReadNumberInRange("Please Enter a Month [1 To 12] ", 1, 12);
}

string GetMonthOfYear(enMonthOfYear Month) {

    switch (Month) {
    case enMonthOfYear::Jan:
        return "January.";
    case enMonthOfYear::Feb:
        return "February.";
    case enMonthOfYear::Mar:
        return "March.";
    case enMonthOfYear::Apr:
        return "April.";
    case enMonthOfYear::May:
        return "May.";
    case enMonthOfYear::Jun:
        return "June.";
    case enMonthOfYear::Jul:
        return "July.";
    case enMonthOfYear::Aug:
        return "August.";
    case enMonthOfYear::Sep:
        return "September.";
    case enMonthOfYear::Oct:
        return "October.";
    case enMonthOfYear::Nov:
        return "November.";
    case enMonthOfYear::Dec:
        return "December.";
    default:
        return"Not a valid Month";

    }
}

int main() {

    cout << GetMonthOfYear(ReadMonthOfYear()) << endl;
}