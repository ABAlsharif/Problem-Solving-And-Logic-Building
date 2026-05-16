#include <iostream>
using namespace std;

/*Problem 8: Write a Program ask the user enter a mark then print "Pass" if the mark >= 50 , Otherwise Print "Fail"*/

enum enPassOrFail{Pass = 1, Fail = 2};

int ReadMarks() {

    int Mark;

    cout << "Please Enter Your Mark? " << endl;
    cin >> Mark;

    return Mark;
}

enPassOrFail CheckMark(int Mark) {

    if (Mark >= 50)
        return enPassOrFail::Pass;
    else
        return enPassOrFail::Fail;
}

void PrintResults(int Mark) {

    if (CheckMark(Mark) == enPassOrFail::Pass)
        cout << "\nYou Passed " << endl;
    else
        cout << "\nYou Failed " << endl;
}
int main() {

    PrintResults(ReadMarks());
}

