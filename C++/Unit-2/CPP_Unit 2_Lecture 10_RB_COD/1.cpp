// Imagine you are tasked with implementing a program to manage complex numbers. The program should
// define a Complex class with attributes for the real and imaginary parts of a complex number. Your task is to
// create two instances of the Complex class, obj and obj2, and allow the user to input real and imaginary values
// for each of them. After setting the data for both objects, you need to display the real and imaginary parts of
// each complex number. Use the pointer to object to accomplish the task.
// Note: This is a sample question asked in a TCS interview.
// Input format:
// The first line of the input consists of real and imaginary parts of the first complex number.
// The second line of the input consists of real and imaginary parts of second complex number.
// Output format :
// The output displays the real and imaginary parts of both complex numbers.
// Refer to the sample output for the formatting specifications.
// Code constraints:
// -103 <= real part <= 103
// -105 <= imaginary parts <= 105

// You are using GCC
#include<iostream>
using namespace std;

class Complex{
    public:
    int real;
    int imag;
    
    void display(){
        cout << "Here the real part is " << real << endl;
        cout << "Here the imaginary part is " << imag << endl;
    }
};

int main(){
    Complex *obj1 = new Complex();
    Complex *obj2 = new Complex();
    cin >> obj1->real >> obj1->imag;
    cin >> obj2->real >> obj2->imag;
    obj1->display();
    obj2->display();
}