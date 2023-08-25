// You are given two arrays of strings, and your task is to write a program that merges them into a
// single array, sorted alphabetically. The program should take two arrays as input, merge them, sort
// the merged array in alphabetical order, and output the sorted merged array.
// Input format :
// The input will be provided as follows:
// The first line contains an integer, sizel, representing the size of the first array.
// The second line contains sizel space-separated strings, representing the elements of the first
// array.
// The third line contains an integer, size, representing the size of the second array.
// The fourth line contains size space-separated strings, representing the elements of the second
// array.
// Output format :
// The output displays a single line containing the merged and alphabetically sorted array of strings,
// separated by spaces.

// Refer to the sample output for formatting specifications.

#include <iostream>
#include <string>
#include <algorithm> 
using namespace std;

int main(){
    string arr[200]; 
    int a, b;
    cin >> a;
    for(int x=0; x<a; x++){
        cin >> arr[x];
    }
    cin >> b;
    for(int x=a; x<a+b; x++){
        cin >> arr[x];
    }
    sort(arr, arr + a + b);
    cout << "Merged and sorted array: ";
    for(int x=0; x<a+b; x++){
        cout << arr[x] << " ";
    }
}
