#include<iostream>
using namespace std;
int main()
{
    /*declaring three variables*/
    int number_1,number_2,number_3,sum,average;

    /*input 3 numbers*/
    cout<<"Enter first number:";
    cin>>number_1;
    cout<<"Enter second number:";
    cin>>number_2;
    cout<<"Enter third number:";
    cin>>number_3;


    /*adding and storing the three numbers */
    sum=number_1+number_2,number_3;
    /*calculating average of the three numbers */
    average=sum/3;

    /*printing the sum*/
    cout<<"Average of "<<number_1<<","<<number_2<<","<<number_3<<"="<<average;
    return 0;




}
