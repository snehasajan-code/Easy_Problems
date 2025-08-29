#include<iostream>
using namespace std;
int main()
{
    /*declaring four variables */
    float principle,rate,time,simple_interest;

    /*input principle,rate,time*/
    cout<<"Enter the principal amount:";
    cin>>principle;
    cout<<"Enter the annual interest rate:";
    cin>>rate;
    cout<<"Enter the time period in years:";
    cin>>time;


    /*applying simple interest calculation formula */
    simple_interest=(principle*rate*time)/100;

    /*printing the simple interest*/
    cout<<"Simple Interest: "<<simple_interest;
    return 0;




}
