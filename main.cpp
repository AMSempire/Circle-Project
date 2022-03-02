#include <iostream>
#include "Circle.h"
using namespace std;

int main() {
    Circle Round;
   Round.setRadius();
 double radius = Round.getRadius(); // radius getting from the function

cout << "The Area of the circle is " << Round.getArea(radius) << endl; //function calls
cout << "The Diameter of the circle is " << Round.getDiameter(radius) << endl;
cout << "The Circumference of the circle is " << Round.getCircumference(radius) << endl;

    return 0;
}

/*TestRun
 *
 * "/Users/aaronshabon/Downloads/Compsci 122/Projects/HW#5.1/cmake-build-debug/HW_5_1"
Enter a new radius please.
300
The Area of the circle is 282743
The Diameter of the circle is 600
The Circumference of the circle is 1884.95

Process finished with exit code 0

 Enter a new radius please.
-200
The Area of the circle is 125664
The Diameter of the circle is -400
The Circumference of the circle is -1256.64

 Process finished with exit code 0

 "/Users/aaronshabon/Downloads/Compsci 122/Projects/HW#5.1/cmake-build-debug/HW_5_1"
Enter a new radius please.
4.453
The Area of the circle is 62.2952
The Diameter of the circle is 8.906
The Circumference of the circle is 27.979

Process finished with exit code 0

 "/Users/aaronshabon/Downloads/Compsci 122/Projects/HW#5.1/cmake-build-debug/HW_5_1"
Enter a new radius please.
45635732
The Area of the circle is 6.54274e+15
The Diameter of the circle is 9.12715e+07
The Circumference of the circle is 2.86738e+08

 Process finished with exit code 0
 */

