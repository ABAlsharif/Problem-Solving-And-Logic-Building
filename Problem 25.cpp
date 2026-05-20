#include <iostream>
using namespace std;

/*Problem 25: Write Program ask user enter age between 18 and 45, if age between 18 and 45 Print "Valid Age",
Otherwise Print "Invalid Age" and reask user to enter valid age*/

int ReadAge() {
	int Age;

	cout << "Please Enter Your Age? " << endl;
	cin >> Age;

	return Age;
}

bool ValidateNumberInRange(int Number, int From, int To) {
	return (Number >= From && Number <= To);
}

int ReadUntilAgeBetween(int From,int To) {
	int Age;

	do {
		Age = ReadAge();
	} while (!ValidateNumberInRange(Age, From, To));

	return Age;
}

void PrintResults(int Age) {

	cout << "\nYour Age is :" << Age << endl;
}

int main() {

	PrintResults(ReadUntilAgeBetween(18,45));
}
