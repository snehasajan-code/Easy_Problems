#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    bool hasDigit = false;

    cout << "Enter a string: ";
    getline(cin, str);

    for(char c : str) {
        if(isdigit(c)) {
            hasDigit = true;
            break; // no need to check further
        }
    }

    if(hasDigit)
        cout << "The string contains a digit." << endl;
    else
        cout << "The string does not contain any digit." << endl;

    return 0;
}
