#include <iostream>
using namespace std;

int main() {
    int number, reversed = 0, digit, temp;

    // Input a number
    cout << "Enter a number: ";
    cin >> number;

    temp = number; // Store original number

    // Reverse the number
    while (number > 0) {
        digit = number % 10;
        reversed = reversed * 10 + digit;
        number = number / 10;
    }

    // Check palindrome
    if (temp == reversed)
        cout << temp << " is a PALINDROME." << endl;
    else
        cout << temp << " is NOT a PALINDROME." << endl;

    return 0;
}
