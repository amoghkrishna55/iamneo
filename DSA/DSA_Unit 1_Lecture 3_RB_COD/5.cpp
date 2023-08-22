// You are developing a program for a data processing company. The company deals with large
// sets of data consisting of strings. However, due to data collection methods, there may be
// duplicate strings in the data sets. Your task is to develop a program that removes duplicate
// strings from an array of strings.
// Write a program that takes user input for the size of the array and the strings in the array. After
// removing duplicate strings, the program should display the updated array.
// Input format :
// The first line of input consists of an integer that represents the size of the array.
// The next 'size' lines consist of the strings in the array, each on a new line.
// Output format :
// The program outputs a single line displaying the updated array of strings after removing
// duplicates.
// Code constraints:
// The size of the array should be a positive integer.
// Each string in the array should not exceed 100 characters.
// String comparison is case-sensitive.

// You are using GCC
#include<iostream>
#include<string>
using namespace std;

int main(){
    int a;
    string arr[100];
    cin >>a;
    for(int x=0;x<a;x++){
        cin >> arr[x];
    }
    for(int x=0;x<a;x++){
        for(int y = x+1;y<a;y++){
            if(arr[x] == arr[y]){
                for(int z = y;z<a;z++){
                    arr[z] = arr[z+1];
                }
                --a;
                --y;
            }
        }
    }
    cout << "Updated array: ";
    for(int x=0;x<a;x++){
        cout << arr[x] << " ";
    }
}