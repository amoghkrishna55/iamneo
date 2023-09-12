// Videsh is developing a program that calculates the distance between two points in a two-dimensional
// coordinate system. The program asks the user to enter the x and y coordinates of two points (pi and p2).
// It then calculates the Euclidean distance between these two points using a function in the class. Finally, it
// displays the calculated distance between two points. Use 'this' pointer to solve the problem.
// Euclidean distance formula: d = / [(×2 - x1)2 + (y2 - 12]
// Note: This is a sample question asked in an HCL interview.
// Input format :
// The first line of input consists of two floating-point numbers representing the x and y coordinates of the first
// point.
// The second line of input contains two floating-point numbers representing the x and y coordinates of the second
// point.
// Output format :
// The output displays the distance between the two points, rounded off to two decimal places.
// Code constraints :
// 0.00 <= x, y <= 500.00

// You are using GCC
#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;

class Distance{
    public:
    float x1,y1,x2,y2;
    
    void calc(){
        float dist = pow(pow((x2-x1),2)+pow((y2-y1),2),0.5);
        cout << fixed << setprecision(2) << dist << endl;
    }
};

int main(){
    Distance dist;
    cin >> dist.x1 >> dist.y1 >> dist.x2 >> dist.y2;
    dist.calc();
}