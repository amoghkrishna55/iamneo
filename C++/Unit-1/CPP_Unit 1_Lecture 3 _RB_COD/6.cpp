// Vivetha was tasked with developing a basic calculator program that performs arithmetic
// operations on two numbers. The program should have a class called "Operation" with the
// following functionalities:
// Create a class named "Operation" that has two private member variables named "a" and "b".
// Define public member functions for the classes "get", "sum", "difference", "product", "division", and
// "modulus". The "get" function should prompt the user to enter values for "a" and "b" and store them
// in the private member variables.

// The "sum" function should compute and output the sum of "a" and "b".
// The "difference" function should compute and output the difference between "a" and "b".
// The "product" function should compute and output the product of "a" and "b".
// The "division" function should compute and output the division of "a" by "b". If "b" is zero, the
// function should output an error message.
// The "modulus" function should compute and output the modulus of "a" and "b". If "b" is zero, the
// function should output an error message.
// In the main function, create an object of the "Operation" class and call its member functions to
// perform the necessary arithmetic operations on the values entered by the user.
// Note: This is a sample question asked in an HCL interview.

// You are using GCC
#include<iostream>
using namespace std;

class Operation{
    int a,b;
    
    public:
    void get(int x, int y){
        a=x;
        b=y;
        sum();
        difference();
        product();
        division();
        modulus();
    }
    
    void sum(){
        cout << "Addition of two numbers: " << a+b << endl;
    }
    
    void difference(){
        cout << "Difference of two numbers: " << a-b << endl;
    }
    
    void product(){
        cout << "Product of two numbers: " << a*b << endl;
    }
    
    void error(){
        cout << "Division by zero not possible" << endl;
    }
    
    void division(){
        if (b!=0){
            cout << "Division of two numbers: " << a/b << endl;
        }
        else{
            error();
        }
    }
    
    void modulus(){
        if (b!=0){
            cout << "Modulus of two numbers: " << a%b << endl;
        }
        else{
            error();
        }
    }
};

int main(){
    Operation opt;
    int a,b;
    cin >> a >> b;
    opt.get(a,b);
}