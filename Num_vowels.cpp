#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    int vowelCount = 0;

    cout << "Enter a string: ";
    getline(cin, str);

    for(char c : str) {
        // convert to lowercase to simplify checking
        c = tolower(c);
        if(c=='a' || c=='e' || c=='i' || c=='o' || c=='u') {
            vowelCount++;
        }
    }

    cout << "Number of vowels in the string: " << vowelCount << endl;

    return 0;
}
