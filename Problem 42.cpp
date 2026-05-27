#include <iostream>
using namespace std;

/*Problem 42: write a program to calculate the task duration in secondes and print it on screen
* --> Given the time duration of a task in the number of days,hours,minutes,and seconds.*/

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

strTaskDuration ReadTaskDuration() {
    strTaskDuration TaskDuration;

    TaskDuration.NumberOfDays = ReadPositiveNumbers("Please Enter Number Of Days? ");
    TaskDuration.NumberOfHours = ReadPositiveNumbers("Please Enter Number Of Hours?");
    TaskDuration.NumberOfMinutes = ReadPositiveNumbers("Please Enter Number Of Minutes?");
    TaskDuration.NumberOfSeconds = ReadPositiveNumbers("Please Enter Number Of Seconds?");

    return TaskDuration;
}

int TaskDurationInSeconds(strTaskDuration TaskDuration) {

    int DurationInSeconds = 0;

    DurationInSeconds = TaskDuration.NumberOfSeconds * 24 * 60 * 60;
    DurationInSeconds += TaskDuration.NumberOfMinutes * 60 * 60;
    DurationInSeconds += TaskDuration.NumberOfHours * 24;
    DurationInSeconds += TaskDuration.NumberOfDays;

    return DurationInSeconds;
}

int main() {

    int Total = TaskDurationInSeconds(ReadTaskDuration());

    cout << "\nTask Duration In Seconds: " << Total;
    cout << endl;
}
