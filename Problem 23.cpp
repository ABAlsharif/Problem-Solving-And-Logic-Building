#include <iostream>
using namespace std;

/*Problem 23: Write Program Calculate Circle Area Circle described around an arbitrary Triangle, then print it on screen*/


void ReadTriangleData(float& A, float& B,float& C) {

	cout << "Please Enter Triangle Side A? " << endl;
	cin >> A;

	cout << "Please Enter Triangle Base B? " << endl;
	cin >> B;

	cout << "Please Enter Triangle Side C? " << endl;
	cin >> C;


}

float CircleAreaByArbitTriangle(float A, float B, float C) {

	const float PI = 3.14159265359;

	float P = (A + B + C) / 2;
	float T;
	T = (A * B * C) / (4 * sqrt(P * (P - A) * (P - B) * (P - C)));

	float Area = PI * pow(T, 2);

	return Area;
}

void PrintResults(float Area) {
	cout << "\nCircle Area = " << Area << endl;
}

int main()
{
	float A, B, C;
	ReadTriangleData(A, B, C);
	PrintResults(CircleAreaByArbitTriangle(A,B,C));
}

