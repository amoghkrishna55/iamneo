// Alice is a mathematics teacher who wants to help her students understand the concept of the
// summation of natural numbers. To make it more interactive, she decides to write a program that
// calculates the sum of all natural numbers between 1 and a given number n using the concept call
// by value.
// Alice's program implements a function called calculatesum (), which takes n as an argument.
// When the program runs, it prompts the user to enter a value for n. After receiving the input, the
// program calls the calculatesum() function, which performs the necessary calculations to find the
// sum of all natural numbers from 1 to n.
// Alice's program provides an engaging way for her students to visualize and understand the
// concept of summation while also enhancing their programming skills.
// Note: This is a sample question asked in TCS recruitment.
// Input format:
// The first line of input should be a positive integer representing the lower limit.
// The second line of input should be a positive integer representing the higher limit.
// Output format :
// The output prints the sum of all natural numbers from 1 to n.

// You are using GCC
#include<iostream>
using namespace std;

int calculatesum(int n , int m){
    int sum;
    sum = (m * (m + 1) - n * (n - 1)) / 2;
}

int main(){
    int n,m;
    cin >> n >> m;
    cout << calculatesum(n,m);
}