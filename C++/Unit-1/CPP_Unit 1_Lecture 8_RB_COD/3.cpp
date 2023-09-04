// Sara is a mathematician who loves exploring the properties of numbers. She recently wrote a
// program to calculate and print the cube of a given number. To accomplish this, she created a
// function cube by using call by reference.
// Whenever someone calls Sara's cube function with a number, it calculates the cube of that
// number and directly modifies the original number. This means that the result is stored in the same
// variable that was passed as an argument.
// Sara's program is designed to provide a convenient way to calculate and store the cube of a
// number without the need for additional variables or assignments. By utilizing the concept of call
// by reference, her program enables users to easily access the cube of any given number simply by
// calling the cube function
// Function Specification:
// cube(int& n)

// Note: This is a sample question asked in a TCS interview.

// You are using GCC
#include <iostream>
using namespace std;

int cube(int& n){
    n = n*n*n;
    return n;
}

int main(){
    int a;
    cin >> a;
    cout << cube(a);
    
}