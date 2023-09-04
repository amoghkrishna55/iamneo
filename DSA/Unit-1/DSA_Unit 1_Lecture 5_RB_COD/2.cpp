// A policeman wants to search for a particular record in a file containing new records. He needs to
// determine whether the record he is looking for exists in the file or not. Help the policeman by
// writing a program that takes the number of records, the record values, and the item to be
// searched as input using dynamic memory allocation.
// Implementing the program using linear search to display whether the item is found in the records
// or not.
// Input format :
// The first line contains an integer n representing the number of elements in the array.
// The second line contains n space-separated integers representing the elements of the array.
// The third line contains an integer item representing the item to be searched in the array.
// Output format :
// The output is a single line that either says "Item found" if the item is found in the array or "Item not
// found" if the item is not found.

// You are using GCC
#include <iostream>
using namespace std;

int main(){
    int a,fin;
    int arr[100];
    bool dat=false;
    cin >> a;
    for(int x=0;x<a;x++){
        cin >> arr[x];
    }
    cin >> fin;
    for(int x=0;x<a;x++){
        if(arr[x] == fin){
            dat=true;
            break;
        }
    }
    if(dat){
        cout << "Item found";
    }
    else{
        cout << "Item not found";
    }
}