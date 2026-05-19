#include <iostream>
using namespace std;

/*Problem 19: Write Program Calculate Circle Area Through Diameter, then print it on screen.*/


float ReadDiameter() {

    float D;

    cout << "Please Enter Radious D? " << endl;
    cin >> D;

    return D;
}

float CircleAreaByDiameter(float D) {

    const float PI = 3.14159265359;

    float Area = (pow(D, 2) * PI) / 4;

    return Area;

}

void PrintResults(float Area) {

    cout << "\n The Circle Area is: " << Area << endl;
}

int main() {

    PrintResults(CircleAreaByDiameter(ReadDiameter()));
}

