#include <iostream>
#include <string>
#include <cctype> // for toupper, tolower

using namespace std;

// Function to check if string is all uppercase
bool isUpperCase(const string &str) {
    for(char c : str) {
        if (isalpha(c) && !isupper(c))
            return false;
    }
    return true;
}

// Function to convert string to lowercase
string toLowerCase(const string &str) {
    string result = str;
    for(char &c : result)
        c = tolower(c);
    return result;
}

// Function to convert string to uppercase
string toUpperCase(const string &str) {
    string result = str;
    for(char &c : result)
        c = toupper(c);
    return result;
}

int main() {
    string str;
    cout << "Enter a string: " << endl;
    getline(cin, str);

    if (isUpperCase(str))
        cout << toLowerCase(str) << endl;
    else
        cout << toUpperCase(str) << endl;

    return 0;
}
