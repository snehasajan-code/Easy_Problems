#include <iostream>
using namespace std;

int main() {
    int limit,sum=0;

    cout << "Enter a limit: ";
    cin>>limit;

    for(int i=1;i<=limit;i++)
    {
        if(i%2!=0)
        {
            sum+=i;
        }
    }

    cout << "Sum of all even numbers upto "<<limit<< " : " << sum << endl;

    return 0;
}
