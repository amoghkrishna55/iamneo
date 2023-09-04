// Janani is the owner of a bike stand and wants to ensure that the bikes parked in her stand are arranged in the correct order. She wants to implement a program that sorts the bikes based on their registration numbers in ascending order.
// Write a program that takes the number of bikes parked in the stand, followed by their registration numbers as input. The program should sort the registration numbers in ascending order using an insertion sort algorithm and then print the sorted list of registration
// numbers.
// Input format :
// The first line contains a single integer N, denoting the size of array A.
// The next line contains N space-separated integers denoting the elements of array A.
// Output format :
// The output displays the N space-separated integers on a single line; that array was sorted.
// Code constraints:
// k=n<=100

// You are using GCC
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    
    for (int i = 1; i < n; i++) {
        int key = a[i];
        int j = i - 1;
        while (j >= 0 && key < a[j]) {
            a[j + 1] = a[j];
            j--;
        }
        a[j + 1] = key;
    }
    
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    return 0;
}
