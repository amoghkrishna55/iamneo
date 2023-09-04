// Ram is given two or three inputs as an integer, if he has two integers then add the two numbers. If he has three inputs,
// then multiply the three numbers.

// Write a program to implement function overloading.
// Function Header:
// funi(int numl,int num2, int num3)
// fun1(int numlint num2)

// Note: This is a sample question asked in a TCS interview.
// Input format :
// The input represents the number of elements (N) followed by the elements separated by a single space.
// Output format :
// The output prints the below outputs based on the mentioned scenario:
// Display the sum, if there are two integers as input.
// Displays product, if there are three integers as input.

// In case, the number of the elements exceeds 3, then display a message as Invalid Input.
// Code constraints:
// N > 0 and N < 4

// You are using GCC
#include<iostream>
using namespace std;

int fun1(int num1,int num2){
    return num1+num2;
}

int fun1(int num1,int num2,int num3){
    return num1*num2*num3;
}

int main(){
    int a, num1, num2, num3;
    cin >> a;
    if (a==2){
        cin >> num1 >> num2;
        cout << fun1(num1,num2);
    }
    else if(a==3){
        cin >> num1 >> num2 >> num3;
        cout << fun1(num1,num2,num3);
    }
    else{
        cout << "Invalid Input";
    }
}