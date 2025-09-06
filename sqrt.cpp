#include <iostream>
#include <cmath> // for sqrt()
using namespace std;

int main() {
    float number_1, number_2, number_3, discriminant, root1, root2;

    // Input coefficients
    cout << "Enter coefficients number_1, number_2 and number_3: ";
    cin >> number_1 >> number_2 >> number_3;

    // Calculate discriminant
    discriminant = number_2 * number_2 - 4 * number_1 * number_3;

    // Check for different cases
    if (discriminant > 0) {
        // Two real and distinct roots
        root1 = (-number_2 + sqrt(discriminant)) / (2 * number_1);
        root2 = (-number_2 - sqrt(discriminant)) / (2 * number_1);
        cout << "Roots are real and distinct.\n";
        cout << "Root 1 = " << root1 << endl;
        cout << "Root 2 = " << root2 << endl;
    }
    else if (discriminant == 0) {
        // Two real and equal roots
        root1 = -number_2 / (2 * number_1);
        cout << "Roots are real and equal.\n";
        cout << "Root = " << root1 << endl;
    }
    else {
        // Complex roots
        float realPart = -number_2 / (2 * number_1);
        float imaginaryPart = sqrt(-discriminant) / (2 * number_1);
        cout << "Roots are complex and imaginary.\n";
        cout << "Root 1 = " << realPart << " + " << imaginaryPart << "i" << endl;
        cout << "Root 2 = " << realPart << " - " << imaginaryPart << "i" << endl;
    }

    return 0;
}
