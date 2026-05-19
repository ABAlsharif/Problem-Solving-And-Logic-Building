#include <iostream>
using namespace std;

/*Problem 20:Write Program Calculate Circle Area Inscribed in Square, then print it on screen*/


float ReadSquareSide() {

    float A;

    cout << "Please Enter Square Side A? " << endl;
    cin >> A;

    return A;
}

float CircleAreaInScribedInSquare(float A) {

    const float PI = 3.14159265359;

    float Area = (PI * pow(A, 2)) / 4;

    return Area;

}

void PrintResults(float Area) {

    cout << "\n The Circle Area is: " << Area << endl;
}

int main() {

    PrintResults(CircleAreaInScribedInSquare(ReadSquareSide()));
}


