#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    cout << "Prime numbers up to " << n << " are: ";

    for (int num = 2; num <= n; num++) {
        bool isPrime = true;
        for (int i = 2; i <= num / 2; i++) {
            if (num % i == 0) {
                isPrime = false;
                break;
            }
        }
        if (isPrime)
            cout << num << " ";
    }

    return 0;
}
