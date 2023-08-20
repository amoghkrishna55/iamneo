// Given an array of strings, write a program to traverse through the array and find the index of a
// specific string. The program should prompt the user to enter the string to be searched and then
// display the index if found or a message indicating that the string was not found.
// Input format:
// The first line of input consists of an integer representing the size of the array.
// The second line of input contains the strings of the array, separated by a line space.
// The last line of input contains the string to be searched.
// Output format :
// The output displays the index of the found string (if found) or a "String not found!" message.
// Refer to the sample output for the formatting specifications.
// Code constraints:
// Maximum size of the array (MAX_SIZE = 100)
// The size of the array should be a positive integer.
// Each string in the array can have a maximum length of 100 characters.
// The string to be searched can have a maximum length of 100 characters.
// String comparison is case-sensitive, so the search is case-sensitive.

// You are using GCC
#include<iostream>
#include<string>
using namespace std;

int main(){
    int a;
    string arr[100],find;
    cin >> a;
    cin.ignore();
    for(int x=0;x<a;x++){
        getline(cin,arr[x]);
    }
    getline(cin,find);
    for(int x=0;x<a;x++){
        if (arr[x] == find){
            cout << x;
            break;
        }
        else if(x==a-1){
            cout << "String not found!";
        }
    }
}