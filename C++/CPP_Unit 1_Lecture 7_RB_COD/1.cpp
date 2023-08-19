// An ice cream vendor sells his ice-creams in cone (radius r and height h) and square (side r) shaped containers.
// However, he is unsure of the quantity that can be filled in the two containers.
// You must write a program that prints the volume of the containers given their respective dimensions as input.
// Your class must be named 'Icecream' which has two methods with the same name 'Quantity' each having the respective
// dimensions of the containers as the parameters.

// Function Header:
// public void Quantity (int r
// public void Quantity (int r, int h)
// Formulas:
// The volume of a square = r**r
// The volume of a cone = 0.33*pi*r**h

// Use variable name as M_PI for pi

// Note: This is a sample question asked in a Capgemini interview.
// Input format :
// The first line of the input consists of the choice (1 for square, 2 for cone).
// If the choice is 1, Enter the side of the square in the next line.
// If the choice is 2, Enter the radius and height of the cone separated by a space in the next line.
// Note: The input type should be a positive integer.
// Output format :
// The output must display the volume of the container rounded off to two decimal places for which the dimensions are
// given.
// Code constraints:
// 0 ‹= r ‹= 50
// 0 <= h ‹= 50

// You are using GCC
#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;

class iceCream{
    public:
    double Quantity(int r){
        return r*r*r;
    }
    
    double Quantity(int r, int h){
        return 0.33*M_PI*r*r*h;
    }
};

int main(){
    iceCream ice;
    int r,h,a;
    cin >> a;
    if (a==1){
        cin >> r;
        cout << fixed << setprecision(2);
        cout << ice.Quantity(r);
    }
    else{
        cin >> r >> h;
        cout << fixed << setprecision(2);
        cout << ice.Quantity(r,h);
    }
}