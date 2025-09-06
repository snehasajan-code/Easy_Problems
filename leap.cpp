#include <iostream>
using namespace std;
int main()
{
    //Declaring a variable//
    int year;

    //Input a year//
    cout<< "Enter a year: ";
    cin>> year;

    //Checking whether a year is leap or not//
    if (year % 4==0 && year%100!=0 || year%400==0)
        cout<<year<<" is a LEAP YEAR ";
    else
        cout<<year<<" is NOT a LEAP YEAR ";

    return 0;
}





