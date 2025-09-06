#include <iostream>
using namespace std;

int main() {
    float side1, side2, side3;

    // Input the sides of the triangle
    cout << "Enter three sides of the triangle: ";
    cin >> side1 >> side2 >> side3;

    // First, check if it's a valid triangle (Triangle Inequality Theorem)
    if (side1 + side2 > side3 && side1 + side3 > side2 && side2 + side3 > side1) {

        // Check type of triangle
        if (side1 == side2 && side2 == side3) {
            cout << "The triangle is Equilateral." << endl;
        }
        else if (side1 == side2 || side1 == side3 || side2 == side3) {
            cout << "The triangle is Isosceles." << endl;
        }
        else {
            cout << "The triangle is Scalene." << endl;
        }

    } else {
        cout << "The given sides do not form a valid triangle." << endl;
    }

    return 0;
}
