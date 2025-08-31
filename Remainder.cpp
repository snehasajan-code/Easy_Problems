#include<iostream>
using namespace std;

int main()
{
    //declare variables
    int dividend, divisor, remainder;

    // Input two numbers
    cout << "Enter the dividend: ";
    cin >> dividend;

    cout << "Enter the divisor: ";
    cin >> divisor;

    // applying the equation
    remainder = dividend % divisor;
    cout << "Remainder = " << remainder << endl;
    return 0;
}
