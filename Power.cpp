#include <iostream>
using namespace std;
#include <cmath> /* for pow() */

int main() {
    /*declaring three variables */
    double number,result
    int exponent;


    /*input value*/
    cout << "Enter a number: ";
    cin >> number;
    cout << "Enter the exponent: ";
    cin >> exponent;

    /*calculating power of a number */
    result = pow(number, exponent);

    /*printing power of a number*/
    cout << number << " raised to the power of " << exponent << " is " << result;

    return 0;
}
