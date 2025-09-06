#include <iostream>
using namespace std;

int main() {
    //declaring a variable//
    int marks;

    //input marks//
    cout << "Enter student's marks (0 - 100): ";
    cin >> marks;

    // Validate input
    if (marks < 0 || marks > 100) {
        cout << "Invalid marks. Please enter a value between 0 and 100.";
    }
    else if (marks >= 90) {
        cout << "Grade: A";
    }
    else if (marks >= 80) {
        cout << "Grade: B";
    }
    else if (marks >= 70) {
        cout << "Grade: C";
    }
    else if (marks >= 60) {
        cout << "Grade: D";
    }
    else if (marks >= 50) {
        cout << "Grade: E";
    }
    else {
        cout << "Grade: F (Fail)";
    }

    return 0;
}
