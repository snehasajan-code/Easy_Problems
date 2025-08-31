#define _USE_MATH_DEFINES  /* Required for MSVC compilers */
#include <cmath>           /* Includes M_PI */
#include <iostream>
using namespace std;

int main() {
    /*declaring variable*/
    double radius;

    /*input radius*/
    cout<<"Enter radius of a circle: ";
    cin>> radius;

    /*calculating circumference of circle*/
    double circumference = 2 * M_PI * radius;

    /*printing area of circle*/
    cout << "Circumference of the circle with radius " <<radius<<" is: "<< circumference;
    return 0;
}
