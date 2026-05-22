#include <iostream>
using namespace std;

/*Problem 34: write a program ask user enter total sales to commission is calculated as one percentage*the total sales amount all you need
* is to decide which percentage to use of the following
* >1000000 -> percentage is 1%
* >500K - 1M -> percentage is 2%
* >100K - 500K -> percentage is 3%
* >50K - 100K -> percentage is 5%
* Otherwise -> percentage is 0%
*/

int ReadTotalSales() {
    float TotalSales;

    cout << "Please enter a Total Sales? " << endl;
    cin >> TotalSales;

    return TotalSales;
}
float GetComissionPercentage(float TotalSales) {
    if (TotalSales >= 1000000)
        return 0.01;
    else if (TotalSales >= 500000)
        return 0.02;
    else if (TotalSales >= 100000)
        return 0.03;
    else if (TotalSales >= 50000)
        return 0.05;
    else
        return 0.00;
}

float calculateTotalComission(float TotalSales) {

    return GetComissionPercentage(TotalSales) * TotalSales;
}
int main() {

    float TotalSales = ReadTotalSales();

    cout << endl << "Comission Percentage = " << GetComissionPercentage(TotalSales) << endl;
    cout << endl << "Total Comission = " << calculateTotalComission(TotalSales) << endl;

}
