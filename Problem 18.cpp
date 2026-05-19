#include <iostream>
using namespace std;

/*Problem 18: Write Program Calculate Circle Area , then print it on screen.
**/

float ReadRadious() {

    float R;

    cout << "Please Enter Radious? " << endl;
    cin >> R;

    return R;
}

float CircleArea(float R) {

    const float PI = 3.14159265359;

    float Area = pow(R, 2) * PI;
    return Area;

}

void PrintResults(float Area) {

    cout << "\n The Circle Area is: " << Area << endl;
}

int main() {

    PrintResults(CircleArea(ReadRadious()));
}

