#include <iostream>
using namespace std;

/*Problem 24: Write Program ask user enter age between 18 and 45, if age between 18 and 45 Print "Valid Age",Otherwise Print "Invalid Age"*/


int ReadAge() {
	int Age;

	cout << "Please Enter Your Age? " << endl;
	cin >> Age;

	return Age;
}

bool ValidateNumberInRange(int Number,int From,int To) {
	return (Number >= From && Number <= To);
}

void PrintResults(int Age) {

	if (ValidateNumberInRange(Age, 18, 45))
		cout << "\nis a Valid Age.\n";
	else
		cout << "\nis an Invalid Age.\n";
}

int main() {

	PrintResults(ReadAge());
}
