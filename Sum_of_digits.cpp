
#include <iostream>
using namespace std;

int main() {
    /*declaring variable*/
    int number,sum=0,digit;

    /*input number*/
    cout<<"Enter a number: "<<endl;
    cin>> number;

    int temp=number;

    while(number>0)
    {
        digit=number%10;
        sum=sum+digit;
        number=number/10;
    }
    cout<<"Sum of digits of "<< temp <<" is: "<< sum;

    return 0;
}
