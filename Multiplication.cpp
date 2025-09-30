
#include <iostream>
using namespace std;

int main() {
    /*declaring variable*/
    int number;

    /*input number*/
    cout<<"Enter a number: "<<endl;
    cin>> number;

    cout<<"Multiplication table of "<< number<<":" <<endl;

     /*multiplying a given number*/
    for(int i=0;i<=10;i++)
    {
        cout<< number <<" * "<<i<<" = "<< number*i <<endl;
    }


    return 0;
}
