#include <iostream>
using namespace std;

int main() {
    int i,sum=0;

    cout << "The first 10 natural numbers are: "<<endl;
    /* Using loop */
    for(i=1;i<=10;i++)
    {
        cout<<i<<" "<<endl;
        sum+=i;
    }
    cout << "The sum of first 10 natural numbers are: "<<sum<<endl;


    return 0;
}
