#include <iostream>
using namespace std;

int main() {
    int angle1, angle2, angle3;

    // Input angles
    cout << "Enter three angles of a triangle: ";
    cin >> angle1 >> angle2 >> angle3;

    // Check if triangle is valid
    if ((angle1 + angle2 + angle3 == 180) && angle1 > 0 && angle2 > 0 && angle3 > 0)
        cout << "The triangle is VALID." << endl;
    else
        cout << "The triangle is NOT VALID." << endl;

    return 0;
}
