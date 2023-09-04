// Given an array of integers, write a program to traverse through the array and find the sum of all
// the elements.
// Input format:
// The first line of input consists of an integer, which represents the size of the array.
// The second line of input consists of the elements of the array.
// Output format :
// The output prints the sum of the elements in the array.
// Code constraints:
// MAX_SIZE of the array = 100
// The size of the array should be a positive integer.
// The elements of the array can be both positive and negative integers.

// You are using GCC
#include <iostream>
using namespace std;

int main(){
    int arr[100],a,sum=0;
    cin >> a;
    for(int x=0;x<a;x++){
        cin >> arr[x];
        sum += arr[x];
    }
    cout << sum;
}