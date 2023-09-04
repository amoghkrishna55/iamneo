// Write a program to delete an element from an array. The program should prompt the user to
// enter the position of the element to be deleted and then display the updated array without that
// element.
// Input format :
// The first line of input contains an integer representing the size of the array.
// The second line of input contains the elements of the array, separated by a space.
// The last line of input contains an integer to enter the position of the element to be deleted.
// Output format :
// The output displays the original array before deletion and the updated array after deletion.
// Refer to the sample output for formatting specifications.
// Code constraints:
// Maximum size of the array (MAX _SIZE = 100)
// The size of the array should be a positive integer.
// The position of the element to be deleted should be a valid position within the array bounds
// (between 1 and size, inclusive.
// The elements of the array can be both positive and negative integers.

// You are using GCC
#include <iostream>
using namespace std;

int main(){
    int a, arr[100], b;
    cin >> a;
    for(int x=0;x<a;x++){
        cin >> arr[x];
    }
    cin >> b;
    cout << "Original array: ";
    for(int x=0;x<a;x++){
        cout << arr[x] << " ";
    }
    cout << endl;
    if (b<=a){
        for(int x=b;x<=a;x++){
            arr[x-1] = arr[x];
        }
        cout << "Updated array: ";
        for(int x=0;x<a-1;x++){
            cout << arr[x] << " ";
        }
        
    }
    else{
        cout << "Invalid position!";
    }
}