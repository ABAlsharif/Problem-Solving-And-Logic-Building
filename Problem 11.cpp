#include <iostream>
using namespace std;

/*Problem 11: Write a Program ask the user enter mark1,mark2,mark3 then print Average of entered marks and Print "Pass" if avg>=50,
Otherwise Print"Fail"*/


enum enPassOrFail{Pass = 1 , Fail = 2};

void ReadMarks(int& Mark1,int& Mark2,int& Mark3) {

    cout << "Please Enter Your Mark1 ? " << endl;
    cin >> Mark1;

    cout << "Please Enter Your Mark2 ? " << endl;
    cin >> Mark2;

    cout << "Please Enter Your Mark3 ? " << endl;
    cin >> Mark3;

}

int SumOf3Marks(int Mark1, int Mark2, int Mark3) {

    return Mark1 + Mark2 + Mark3;
}

float CalculateAverage(int Mark1, int Mark2, int Mark3) {
    return (float)SumOf3Marks(Mark1,Mark2,Mark3) / 3;
}

enPassOrFail CheckAverage(float Average) {

    if (Average >= 50)
        return enPassOrFail::Pass;
    else
        return enPassOrFail::Fail;
}

void PrintResults(float Average) {

    cout << "\n Your Average is: " << Average << endl;

    if (CheckAverage(Average) == enPassOrFail::Pass)
        cout << "\n You Passed. " << endl;
    else
        cout << "\n You Failed. " << endl;
}

int main()
{
    int Mark1, Mark2, Mark3;
    ReadMarks(Mark1, Mark2, Mark3);
    PrintResults(CalculateAverage(Mark1,Mark2,Mark3));
}

