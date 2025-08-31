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

     /*calculating area of circle*/
    double area = M_PI * radius * radius;

    /*printing area of circle*/
    cout << "Area of the circle with radius " <<radius<<" is: "<< area;
    return 0;
}
