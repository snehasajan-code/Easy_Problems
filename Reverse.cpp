
#include <iostream>
using namespace std;

int main() {
    /*declaring variable*/
    int number,rev=0,digit;

    /*input number*/
    cout<<"Enter a number: "<<endl;
    cin>> number;

    int temp=number;

    while(number>0)
    {
        digit=number%10;
        rev=rev*10+digit;
        number=number/10;
    }
    cout<<"Reverse of "<< temp <<" is: "<< rev;

    return 0;
}
