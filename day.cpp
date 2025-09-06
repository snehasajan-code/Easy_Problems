#include <iostream>
using namespace std;

int main() {
    int day;

        cout << "Enter a number(1 to 7): ";
        cin >> day;

        // Handle menu choices
        switch (day) {
            case 1:
                cout << "Sunday\n";
                // Code for Option 1
                break;

            case 2:
                cout << "Monday\n";
                // Code for Option 2
                break;

            case 3:
                cout << "Tuesday\n";
                // Code for Option 3
                break;

            case 4:
                cout << "Wednesday\n";
                // Code for Option 4
                break;

            case 5:
                cout << "Thursday\n";
                // Code for Option 5
                break;

            case 6:
                cout << "Friday\n";
                // Code for Option 6
                break;

            case 7:
                cout << "Saturday\n";
                // Code for Option 7
                break;

            default:
                cout << "Invalid choice. Please try again.\n";
        }

    return 0;
}
