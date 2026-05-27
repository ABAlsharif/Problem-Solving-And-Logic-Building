#include <iostream>
using namespace std;

/*Problem 43: write a program that inputs the number of seconds and changes it to days,hours,minutesm=,and secondes.*/

struct strTaskDuration
{
    int NumberOfDays, NumberOfHours, NumberOfMinutes, NumberOfSeconds;
};

int ReadPositiveNumbers(string Message) {

    int Number = 0;

    do {
        cout << Message << endl;
        cin >> Number;
    } while (Number <= 0);

    return Number;
}

strTaskDuration SecondsToTaskDuration(int TotalSeconds) {
    strTaskDuration TaskDuration;

    const int SecondsPerDay = 24 * 60 * 60;
    const int SecondsPerHours =  60 * 60;
    const int SecondsPerMinutes =  60;

    int Reminder = 0;
    TaskDuration.NumberOfDays = floor(TotalSeconds / SecondsPerDay);
    Reminder = TotalSeconds % SecondsPerDay;
    TaskDuration.NumberOfHours = floor(Reminder / SecondsPerHours);
    Reminder = Reminder % SecondsPerHours;
    TaskDuration.NumberOfMinutes = floor(Reminder / SecondsPerMinutes);
    Reminder = Reminder % SecondsPerMinutes;
    TaskDuration.NumberOfSeconds = Reminder;

    return TaskDuration;
}

void PrintTaskDurationDetails(strTaskDuration TaskDuration) {

    cout << "\n";
    cout << TaskDuration.NumberOfDays << ":"
        << TaskDuration.NumberOfHours << ":"
        << TaskDuration.NumberOfMinutes << ":"
        << TaskDuration.NumberOfSeconds << endl;
}


int main() {

    int TotalSeconds = ReadPositiveNumbers("Please Enter Total Seconds?");

    PrintTaskDurationDetails(SecondsToTaskDuration(TotalSeconds));
}
