
#include <iostream>
using namespace std;

int main() {
    /*declaring variable*/
    int number,fact=1;

    /*input number*/
    cout<<"Enter a number: "<<endl;
    cin>> number;


     /*calculating factorial of a given number */
    for(int i=1;i<=number;i++)
    {
        fact=fact*i;

    }
    cout<<"Factorial of "<< number<< " is: "<< fact <<endl;


    return 0;
}
