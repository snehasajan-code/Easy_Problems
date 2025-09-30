
#include <iostream>
using namespace std;

int main() {
    /*declaring variable*/
    int number;
    bool isPrime=true;

    /*input number*/
    cout<<"Enter a number: "<<endl;
    cin>> number;

    if(number<=1)
    {
        isPrime=false;
    }
    else
    {
        for(int i=2;i<=number/2;i++)
        {
            if(number%i==0)
            {
                isPrime=false;
                break;
            }
        }
    }
    if(isPrime)
        cout<< number<< " is a Prime number "<< endl;
    else
        cout<< number<< " is NOT a Prime number "<< endl;


    return 0;
}
