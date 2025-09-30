
#include <iostream>
using namespace std;

int main() {
    /*declaring variables*/
    int number_1,number_2;

    /*input number*/
    cout<<"Enter two numbers: "<<endl;
    cin>> number_1>>number_2;

    int x=number_1,y=number_2;

    while(number_2>0)
    {
        int temp= number_2;
        number_2=number_1%number_2;
        number_1=temp;
    }

    cout<<"GCD of "<<x<<" and "<<y<<" = "<<number_1<<endl;


    return 0;
}
