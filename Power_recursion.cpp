#include <iostream>
using namespace std;

// Recursive function to calculate power
int power(int base, int exp) {
    if (exp == 0)  // base case
        return 1;
    else
        return base * power(base, exp - 1); // recursive call
}

int main() {
    int base, exp;

    cout << "Enter base: ";
    cin >> base;

    cout << "Enter exponent: ";
    cin >> exp;

    cout << base << "^" << exp << " = " << power(base, exp) << endl;

    return 0;
}
