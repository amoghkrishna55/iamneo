// You are given a set of arrays, and you need to write a program to merge them into a single array
// in the order they are given. The goal is to create a new array that contains all the elements from
// the input arrays, maintaining the order of the elements as per the given order.
// Input format :
// The input will be provided as follows:
// The first line contains an integer, numArrays, which represents the number of arrays to merge.
// For each array, the following lines will provide the details:
// The first line contains an integer, arraySize, which represents the size of the array.
// The second line contains arraySize space-separated integers, representing the elements of the
// array.
// Output format :
// The output displays a single line containing the merged array.

// Refer to the sample output for formatting specifications.
// Code constraints:
// 1s numArrays < 10: The number of arrays to merge.
// 1s arraySize < 100: The size of each array
// -106 ≤ elements of the arrays < 106. The elements of the arrays can be integers within this range.

// You are using GCC
#include<iostream>
using namespace std;

int main(){
    int a,num=0;
    cin >> a;
    int arr[100];
    for(;a>0;a--){
        int q;
        cin >> q;
        for(int x=num;x<num+q;x++){
            cin >> arr[x];
        }
        num += q;
    }
    cout << "Merged array: ";
    for(int x=0;x<num;x++){
        cout << arr[x] << " ";
    }
}