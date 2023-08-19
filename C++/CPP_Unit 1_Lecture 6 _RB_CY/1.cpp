// You have been assigned the responsibility of implementing the Area class for the construction company's
// software application.
// You have declared the following inline functions within the Area class: get (), squareArea (), rectangleArea (),
// circleArea, and parallelogramArea (). These functions are used to calculate the area of different geometric
// shapes.

// Include the necessary code for the class definition and method implementations. Then, create an object of the
// Ared class in the main method and demonstrate how the methods can be called to calculate the areas of
// squares, rectangles, circles, and parallelograms. Provide the complete code solution, including the class
// definition, method implementations, and the main method where the object is created and the methods are
// called.
// Note: This is a sample question asked in a HCL interview.
// Input format :
// The first value is an integer value for the side of a square.
// The next two values are integer values for the length and breadth of a rectangle, respectively.
// The fourth value is a floating-point value for the radius of a circle.
// The last two values are floating-point values for the base and height of a parallelogram, respectively.
// Output format :
// The program should output the areas of the square, rectangle, circle, and parallelogram in separate lines with
// the corresponding labels.
// The output should be rounded off to two decimal places for the area of the circle.

// Refer to the sample output for formatting specifications.

// You are using GCC
#include <iostream>
#include <iomanip>
using namespace std;

class Area{
    double const pi = 3.14;
    int side,len,bret,square,rectangle;
    double rad,base,heig,circle,parallel;
    public:
    inline void get(){
        cin >> side >> len >> bret >> rad >> base >> heig;
        squareArea();
        rectangleArea();
        circleArea();
        parallelogramArea();
        cout << fixed << setprecision(2);
        cout << "Area of the square: " << square << endl;
        cout << "Area of the rectangle: " << rectangle << endl;
        cout << "Area of the circle: " << circle << endl;
        cout << "Area of the parallelogram: " << parallel;
    }
    
    void squareArea(){
        square = side*side;
    }
    
    void rectangleArea(){
        rectangle = len*bret;
    }
    
    void circleArea(){
        circle = pi*rad*rad;
    }
    
    void parallelogramArea(){
        parallel = base*heig;
    }
};

int main(){
    Area area;
    area.get();
}