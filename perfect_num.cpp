#include <iostream>
using namespace std;

int main() {
    int number, sum = 0;

    // Input from user
    cout << "Enter a number: ";
    cin >> number;

    // Find sum of proper divisors
    for (int i = 1; i < number; i++) {
        if (number % i == 0) {
            sum += i;
        }
    }

    // Check if number is perfect
    if (sum == number)
        cout << number << " is a PERFECT number." << endl;
    else
        cout << number << " is NOT a perfect number." << endl;

    return 0;
}
