// Imagine you are writing a program to calculate the circumference and area of a circular garden,
// given its radius. You want to represent the garden as a structure, and you want the program to
// display the results rounded off to 2 decimal places.

// By entering the radius of the garden, the program will calculate and output the circumference
// and area of the circular garden, providing you with valuable information for gardening purposes.

// Structure Name: struct Circle

// Formula:
// circumference = 2 * PI * radius;
// area = PI * radius * radius

// Assume that the PI value is 3.14.

// Note: This is a sample question asked in a TCS interview.
// Input format :
// The input consists of a single floating-point number representing the radius of the circle.
// Output format:
// The first line of output displays the circumference of the circle rounding off to two decimal places.
// The second line of output displays the area of the circle rounding off to two decimal places.
// Code constraints:
// Use PI value as 3.14.
// The radius of the circle is a positive floating-point number.

// You are using GCC
#include <iostream>
#include <iomanip>
using namespace std;

struct Circle{
    double const pi = 3.14;
    double radius;
    
    void ans(){
        cout << fixed <<setprecision(2);
        cout << 2*pi*radius << endl;
        cout << pi*radius*radius;
    }
};

int main(){
    Circle circle;
    cin >> circle.radius;
    circle.ans();
}