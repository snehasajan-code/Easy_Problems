#include <iostream>
using namespace std;

int main() {
    char ch;

    /* Input character */
    cout << "Enter a character: ";
    cin >> ch;

    if (!isalpha(ch))
    {
        cout << "Invalid input. Please enter an alphabet." << endl;
    }

    /* Output ASCII value */
    cout << "The ASCII value of " << ch << " is " << int(ch);

    return 0;
}
