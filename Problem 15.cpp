#include <iostream>
using namespace std;

/*Problem 15: Write Program Calculate Rectangle Area and Print it On Screen.
*
Note : The Rectangle Area = Width * Length.*/


void ReadNumbers(float& A, float& B) {

    cout << "Please Enter Rectangle Width A? " << endl;
    cin >> A;

    cout << "Please Rectangle Length B? " << endl;
    cin >> B;

}

float CalculatRectangleArea(float A, float B) {

    return A * B;

}

void PrintResults(float Area) {

    cout << "\n The Rectangle Area is: " << Area << endl;
}

int main() {

    float A, B;
    ReadNumbers(A, B);
    PrintResults(CalculatRectangleArea(A, B));
}