#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;

    int arr[n];  // array of size n
    cout << "Enter " << n << " elements: ";
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // Initialize sum with the first element
    int sum = 0;
    for(int i=0;i<n;i++)
    {
        sum=sum+arr[i];
    }
    int avg=sum/n;

    cout << "Average of elements in the array is: " << avg << endl;

    return 0;
}
