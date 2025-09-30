#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;

    cout << "Enter a string: ";
    getline(cin, str);

    int freq[256] = {0};   // ASCII size array

    // Count frequency of each character
    for (int i = 0; i < str.length(); i++) {
        freq[(unsigned char)str[i]]++;
    }

    cout << "Character occurrences in the string:\n";
    for (int i = 0; i < 256; i++) {
        if (freq[i] > 0) {
            cout << (char)i << " : " << freq[i] << endl;
        }
    }

    return 0;
}
