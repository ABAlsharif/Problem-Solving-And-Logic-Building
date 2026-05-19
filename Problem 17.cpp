#include <iostream>
using namespace std;

/*Problem 17: Write Program Calculate Triangle Area, then print it on screen.*/


void ReadNumbers(float& Base, float& Height) {

    cout << "Please Enter Triangle Base? " << endl;
    cin >> Base;

    cout << "Please Triangle Height ? " << endl;
    cin >> Height;

}

float TriangleArea(float Base, float Height) {

    return (Base / 2) * Height;

}

void PrintResults(float Area) {

    cout << "\n The Triangle Area is: " << Area << endl;
}

int main() {

    float Base, Height;
    ReadNumbers(Base,Height );
    PrintResults(TriangleArea(Base, Height));
}
