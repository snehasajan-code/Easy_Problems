#include <iostream>
using namespace std;
int main()
{
    //Declaring an integer//
    int number;

    //Input a number//
    cout<< "Enter a number: ";
    cin>> number;

    //Checking whether number is divisible by two condition//
    if (number % 5==0 && number%11==0)
        cout<<"Number is divisible by 5 and 11";
    else
        cout<<"Number is not divisible by 5 and 11";

    return 0;
}





