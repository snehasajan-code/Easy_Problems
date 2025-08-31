#include<iostream>
using namespace std;
int main()
{
    /*declaring a variable */
    int number;
    /*input number*/
    cout<<"Enter a number:";
    cin>>number;

    /*comparing the number in three conditions */
    if(number>0)
    {
        cout<<number<<" is a Positive Number";
    }
    else if(number<0)
    {
        cout<<number<<" is a Negative Number";
    }
    else
    {
        cout<<number<<" is Zero";
    }
    return 0;

}
