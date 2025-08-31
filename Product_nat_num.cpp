#include <iostream>
using namespace std;

int main() {
    int i,product=1;

    cout << "The first 10 natural numbers are: "<<endl;
    /* Using loop */
    for(i=1;i<=10;i++)
    {
        cout<<i<<" "<<endl;
        product*=i;
    }
    cout << "The product of first 10 natural numbers are: "<<product<<endl;


    return 0;
}
