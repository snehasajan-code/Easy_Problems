#include<iostream>
using namespace std;

int main()
{
    //declare variables
    int number_1,number_2,number_3;

    // Input two numbers
    cout << "Enter the first number: ";
    cin >> number_1;

    cout << "Enter the second number: ";
    cin >> number_2;

    // using third variable swapping two numbers
    number_3=number_1;
    number_1=number_2;
    number_2=number_3;
    cout << "The value of first number after swap = " << number_1 << endl;
    cout << "The value of second number after swap = " << number_2 << endl;

    return 0;
}
