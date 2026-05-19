#include <iostream>
using namespace std;

/*Problem 16: Write Program Calculate Rectangle Area Through diagonal and Side Area Of Rectangle and Print it On Screen.
*
Note : The Rectangle Area using diagonal = a^2 * root square of d^2 - a^2 .*/


void ReadNumbers(float& A, float& D) {

    cout << "Please Enter Rectangle Side A? " << endl;
    cin >> A;

    cout << "Please Rectangle Diagonal D? " << endl;
    cin >> D;

}

float RectangleAreaBySideAndDiagonal(float A, float D) {

    return A * sqrt(pow(D, 2) - pow(A, 2));

}

void PrintResults(float Area) {

    cout << "\n The Rectangle Area is: " << Area << endl;
}

int main() {

    float A, D;
    ReadNumbers(A, D);
    PrintResults(RectangleAreaBySideAndDiagonal(A, D));
}

