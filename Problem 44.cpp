#include <iostream>
using namespace std;

/*Problem 44: write a program ask user to enter: Day
then Print The Follows:
1 print Saturday
2 print Sunday
3 print Monday
4 print Tuesday
5 print Wednesday
6 print Thuurday
7 print Friday
Otherwise Print "Wrong Day!" and ask the user to enter the day again.*/

enum enDaysOfWeek { Sat = 1,Sun = 2, Mon = 3, Tue = 4, Wed = 5, Thu = 6, Fri = 7 };

int ReadNumberInRange(string Message,int From,int To) {

    int Number = 0;

    do
    {
        cout << Message << endl;
        cin >> Number;
    } while (Number<From || Number>To);

    return Number;
}

enDaysOfWeek ReadDaysOfWeek() {
    return (enDaysOfWeek)ReadNumberInRange
    ("Please Enter Day Number: Sat = 1,Sun = 2, Mon = 3, Tue = 4, Wed = 5, Thu = 6, Fri = 7 ?",1,7);
}

string GetDaysOfWeek(enDaysOfWeek Day) {

    switch (Day){
        case enDaysOfWeek::Sat:
            return "Saturday";
        case enDaysOfWeek::Sun:
            return "Sunday";
        case enDaysOfWeek::Mon:
            return "Monday";
        case enDaysOfWeek::Tue:
            return "Tuesday";
        case enDaysOfWeek::Wed:
            return "Wednesday";
        case enDaysOfWeek::Thu:
            return "Thuurday";
        case enDaysOfWeek::Fri:
            return "Friday";
        default:
            return "Not a Valid Day.";
    }

}

int main() {

    cout << GetDaysOfWeek(ReadDaysOfWeek()) << endl;
} 
