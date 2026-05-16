#include <iostream>
using namespace std;

/*Problem 10: Write a Program ask the user enter mark1,mark2,mark3 then print Average of entered marks*/


void ReadNums(int& mark1, int& mark2, int& mark3) {

    cout << "Please Enter The First Mark? " << endl;
    cin >> mark1;

    cout << "Please Enter The Seconed Mark? " << endl;
    cin >> mark2;

    cout << "Please Enter The Third Mark? " << endl;
    cin >> mark3;
}

int SumOf3Numbers(int mark1, int mark2, int mark3) {
    return mark1 + mark2 + mark3;
}

float CalsulateAverage(int mark1, int mark2, int mark3) {
    return (float)SumOf3Numbers(mark1,mark2,mark3) / 3;
}

void PrintResults(float Average) {
    cout << "\nThe Average Is " << Average << endl;
}

int main() {
    int mark1, mark2, mark3;
    ReadNums(mark1, mark2, mark3);
    PrintResults(CalsulateAverage(mark1, mark2, mark3));
}

