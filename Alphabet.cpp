#include <iostream>
using namespace std;
int main()
{
    //Declaring a variables//
    char ch;

    //Input a character//
    cout<< "Enter a character : ";
    cin>> ch;

    //Checking character is alphabet or not//
    if (isalpha(ch))
        cout<<ch<<" is an ALPHABET ";

    else
        cout<<ch<<" not an alphabet";


    return 0;
}





