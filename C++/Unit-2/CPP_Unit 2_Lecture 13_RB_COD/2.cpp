// Meena wants to write a program that calculates the volume of a cube based on the user-provided values for
// its length, breadth, and height. Help Meena implement the program using a class named Cube with member
// functions like:
// void setLength (double I) - Sets the length of the cube to the provided value I.
// void setBreadth (double b) - Sets the breadth of the cube to the provided value b.
// void setHeight (double h) - Sets the height of the cube to the provided value h.
// double getVolume - Calculates and returns the volume of the cube based on the set length, breadth, and
// height values.
// Note: This is a sample question asked in an IBM interview.
// nput format :
// The input consists of the three double-point numbers representing the length (1), breadth (b), and height (h) of
// the cube, separated by a space.
// Output format :
// The output displays the volume of the cube calculated using the input values.

#include <iostream>
using namespace std;

int main(){
    
    double a,b,c;
    cin>>a>>b>>c;
    double vol=a*b*c;
    
    cout<<vol;
    
    
    return 0;
}
