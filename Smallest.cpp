#include<iostream>
using namespace std;
int main()
{
    /*declaring three variables */
    int number_1,number_2;
    /*input two numbers*/
    cout<<"Enter first number:";
    cin>>number_1;
    cout<<"Enter second number:";
    cin>>number_2;

    /*comparing the number in two conditions */
    if(number_1<number_2)
    {
        cout<<number_1<<" is Smallest";
    }
    else
    {
        cout<<number_2<<" is Smallest";
    }
    return 0;

}
