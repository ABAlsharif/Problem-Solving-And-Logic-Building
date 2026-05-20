#include <iostream>
using namespace std;

/*Problem 21: Write Program Calculate Circle Area along the Circum Ference , then print it on screen*/


float ReadCircumFerence() {
	float L;
	cout << "Please Enter Circum Ference? " << endl;
	cin >> L;

	return L;

}

float CircleAreaByCircumFerence(float L) {
	const float PI = 3.14159265359;

	float Area = pow(L, 2) / (PI * 4);

	return Area;
}

void PrintResults(float Area) {
	cout << "\nCircle Area = " << Area << endl;
}

int main()
{
	PrintResults(CircleAreaByCircumFerence(ReadCircumFerence()));
}

