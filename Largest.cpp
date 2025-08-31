#include<iostream>
using namespace std;
int main()
{
    /*declaring three variables */
    int number_1,number_2;
    /*input number*/
    cout<<"Enter first number:";
    cin>>number_1;
    cout<<"Enter second number:";
    cin>>number_2;

    /*comparing the number in two conditions and printing */
    if(number_1>number_2)
    {
        cout<<number_1<<" is Largest";
    }
    else
    {
        cout<<number_2<<" is Largest";
    }
    return 0;

}
