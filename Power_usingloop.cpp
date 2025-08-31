#include <iostream>
using namespace std;
#include <cmath> /* for pow() */

int main() {
    /*declaring three variables */
    double number,result=1;
    int exponent;

    /*input value*/
    cout << "Enter a number: ";
    cin >> number;
    cout << "Enter the exponent: ";
    cin >> exponent;

    /*calculating power of a number using loop*/
     for (int i = 1; i <= exponent; ++i) {
        result *= number;
    }

    /*printing power of a number*/
    cout << number << " raised to the power of " << exponent << " is " << result;

    return 0;

}
