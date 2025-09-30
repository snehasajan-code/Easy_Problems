
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
    int gcd=number_1;
    int lcm=(x*y)/gcd;
    cout<<"LCM of "<<x<<" and "<<y<<" is "<<lcm<<endl;


    return 0;
}
