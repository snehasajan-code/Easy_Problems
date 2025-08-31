#include<iostream>
using namespace std;
int main()
{
    /*declaring a variable */
    int number;
    /*input number*/
    cout<<"Enter a number:";
    cin>>number;

    /*comparing the number in two conditions */
    if(number%2==0)
    {
        cout<<number<<" is an Even Number";
    }
    else
    {
        cout<<number<<" is a Odd Number";
    }
    return 0;

}
