// Imagine you are developing a math learning application that helps students practice finding the greatest
// common divisor (GCD) of two numbers. To accomplish this, you need to create a program that asks the user to
// enter two integers. The program should then calculate the CD of the two numbers using Euclid's algorithm,
// which involves finding the largest number that divides both input numbers without leaving a remainder.
// Your task is to write a program that prompts the user to enter two integers, calculates the CD using an inline
// function, and displays the result. This program will provide students with an interactive way to practice and
// improve their understanding of the CD concept.
// Note: This is a sample question asked in a Capgemini interview.
// Input format :
// The input consists of two integers, x and y separated by space.
// Output format :
// The output displays the CD of the two integers.

// You are using GCC
#include<iostream>
using namespace std;

inline int gcd(int a,int b){
    while (b != 0){
        int temp = b;
        b = a%b;
        a = temp;
    }
    cout << a;
}

int main(){
    int a,b;
    cin >> a >>b;
    gcd(a,b);
}