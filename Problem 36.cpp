#include <iostream>
using namespace std;

/*Problem 36: write a program ask user enter num1,num2,opreator type .Then calculation according to opreation type as follows:
" + ": add the two numbers
" - ": subtract the two numbers
" * ": multiply the two numbers
" / ": divided the two numbers
*/

enum enOpreationType { Add = '+', Suntract = '-', Multiply = '*', Divide = '/' };

float ReadNumber(string Message) {

    float Number = 0;

    cout << Message << endl;
    cin >> Number;

    return Number;
}

enOpreationType ReadOpreationType() {
    //initial value of Opreation Type
    char OPT = '+';

    cout << "Please enter Opreation Type ( + , - , * , / )? " << endl;
    cin >> OPT;

    return (enOpreationType)OPT;
}

float Calculate(float Number1, float Number2, enOpreationType OpType) {

    switch (OpType)
    {
    case enOpreationType::Add:
        return Number1 + Number2;
    case enOpreationType::Suntract:
        return Number1 - Number2;
    case enOpreationType::Multiply:
        return Number1 * Number2;
    case enOpreationType::Divide:
        return Number1 / Number2;
    default:
        return Number1 + Number2;
    }

}

int main()
{
    float Number1 = ReadNumber("Please Enter the First Number? ");
    float Number2= ReadNumber("Please Enter the Seconed Number? ");

    enOpreationType OpType = ReadOpreationType();

    cout << endl << "Result = " << Calculate(Number1, Number2, OpType);
}

