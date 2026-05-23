#include <iostream>
#include <string>
using namespace std;

/*Pronlem 37: write a program read numbers from user and sum them , keep reading until the user enter -99 then print the sum
*
* Note: The program ends if -99 is entered, and it's not included in the sum.
*/

float ReadNumber(string Message) {

    float Number = 0;

    cout << Message << endl;
    cin >> Number;

    return Number;
}

float SumNumbers() {
    int sum = 0, Number = 0, Counter = 1;

    do
    {
        Number = ReadNumber("Please enter Number " + to_string(Counter));

        if (Number == -99)
        {
            break;
        }
        sum += Number;
        Counter++;

    } while (Number != -99);

     return sum;
}

int main() {
    float Sum = SumNumbers();
    cout << endl << "Result = " << Sum << endl;
}
