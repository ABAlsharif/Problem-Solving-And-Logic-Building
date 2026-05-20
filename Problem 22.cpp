#include <iostream>
using namespace std;

/*Problem 22: Write Program Calculate Circle Area Inscribed in Isosceles Triangle , then print it on screen*/

void ReadTriangleData(float& A,float& B) {

	cout << "Please Enter Triangle Side A? " << endl;
	cin >> A;

	cout << "Please Enter Triangle Base B? " << endl;
	cin >> B;

}

float CircleAreaByIsosTriangle(float A, float B) {

	const float PI = 3.14159265359;

	float Area = PI * (pow(B, 2) / 4) * ((2 * A - B) / (2 * A + B));

	return Area;
}

void PrintResults(float Area) {
	cout << "\nCircle Area = " << Area << endl;
}

int main()
{
	float A, B;
	ReadTriangleData(A,B);
	PrintResults(CircleAreaByIsosTriangle(A,B));
}


