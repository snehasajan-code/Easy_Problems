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
    /* checking if given character is vowel or consonant */
    else if(ch=='a'|| ch=='e'||ch=='i'||ch=='o'||ch=='u')
    {
        cout<<ch<<" is a Vowel";
    }
    else
    {
        cout<<ch<<" is a Consonant";
    }

    return 0;
}
