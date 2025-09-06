#include <iostream>
using namespace std;
int main()
{
    //Declaring three variables//
    int number_1,number_2,number_3;

    //Input three numbers//
    cout<< "Enter first number : ";
    cin>> number_1;
    cout<< "Enter second number : ";
    cin>> number_2;
    cout<< "Enter third number : ";
    cin>> number_3;

    //Checking largest among three number//
    if (number_1>number_2 && number_1>number_3)
        cout<<number_1<<" is the LARGEST Number ";

    else if (number_2>number_1 && number_2>number_3)
        cout<<number_2<<" is the LARGEST Number ";

    else
        cout<<number_3<<" is the LARGEST Number ";


    return 0;
}





