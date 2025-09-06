#include <iostream>
#include<cctype>
using namespace std;
int main()
{
    //Declaring a variables//
    char ch;

    //Input a character//
    cout<< "Enter a character : ";
    cin>> ch;

    //Checking character is digit or not//
    if (isdigit(ch))
        cout<<ch<<" is a DIGIT ";

    else
        cout<<ch<<" not a DIGIT";


    return 0;
}





