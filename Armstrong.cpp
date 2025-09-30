
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
        sum=sum+(digit*digit*digit);
        number=number/10;
    }
    if(temp==sum)
        cout<<"It is an ARMSTRONG NUMBER ";
    else
        cout<<"It is NOT an ARMSTRONG NUMBER ";


    return 0;
}
