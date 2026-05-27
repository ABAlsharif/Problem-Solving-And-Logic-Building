#include <iostream>
using namespace std;

/*Problem 41: write a program read number of Hours and Calculate the number of Weeks,and Days included in that number.*/


float ReadPositiveNumbers(string Message) {

    float Number = 0;

    do {
        cout << Message << endl;
        cin >> Number;
    } while (Number <= 0);

    return Number;
}
float HoursToDay(float NumberOfHours) {
    return (float)NumberOfHours / 24;
}
float HoursToWeek(float NumberOfHours) {
    return (float)NumberOfHours / 24 / 7;
}
float DaysToWeeks(float NumberOfDays) {
    return (float)NumberOfDays / 7;
}

int main()
{
    float NumberOfHours = ReadPositiveNumbers("Please Enter a Positive Number Of Hours? ");
    float NumberOfDays = HoursToDay(NumberOfHours);
    float NumberOfWeeks = DaysToWeeks(NumberOfDays);

    cout << endl;
    cout << "Total Hours = " << NumberOfHours << endl;
    cout << "Total Days = " << NumberOfDays << endl;
    cout << "Total Weeks = " << HoursToWeek(NumberOfWeeks) << endl;

}


