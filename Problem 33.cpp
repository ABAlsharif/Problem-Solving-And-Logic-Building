#include <iostream>
using namespace std;

/*Problem 33: write a program ask user enter(Grade) then print grades as follow: 90-100 ->A,80-89 ->B ,70-79 ->C ,60-69 ->D ,50-59 ->E, 
Otherwise->F 
*/

int ReadNumberInRange(int From,int To) {
    int Grade;

    do {
        cout << "Please Enter Your Grade between 0 and 100? " << endl;
        cin >> Grade;
    } while (Grade<From || Grade>To);

    return Grade;
}

char GetGradeLetter(int Grade) {
    if (Grade >= 90)
        return 'A';
    else if (Grade >= 80)
        return'B';
    else if (Grade >= 70)
        return 'C';
    else if (Grade >= 60)
        return 'D';
    else if (Grade >= 50)
        return 'E';
    else
        return 'F';
}
int main() {
    char i= GetGradeLetter(ReadNumberInRange(0, 100));
    cout << endl << "Result: " << i;
}

