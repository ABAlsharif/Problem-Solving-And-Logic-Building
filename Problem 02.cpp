#include <iostream>
using namespace std;

/* problem 2: Write Program Read Your Name and Print it On Screen*/

#include <string>

string ReadName() {

    string Name;

    cout << "Please Enter Your Name?" << endl;

    getline(cin, Name);

    return Name;

}

void PrintName(string Name) {

    cout << "\nYour Name Is : " << Name << endl;
}

int main() {

    PrintName(ReadName());
}
