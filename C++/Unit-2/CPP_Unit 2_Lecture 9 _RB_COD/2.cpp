// Preethi is working at a bookstore and needs to manage the inventory. Her bookstore receives shipments from two
// different suppliers, and she wants to find the books that are common between the two shipments.
// Preethi wants your help to solve her problem. Help her write a program to find the intersection of the two shipment
// lists based on the book id numbers and help her update the inventory accordingly.
// Note: The id numbers will be checked based on the order of inputs in both supplies.
// Function specifications: void findIntersection (int* arrl, int sizel, int* arr2, int size, int& sizelntersection, int*
// intersection)
// Example
// Input:
// 4
// 101 122 157 110
// 3
// 157 122 97
// Output:
// 157
// Explanation:
// Here, the book id numbers 157 and 122 are common in the given two supplies. But the order is different. So, only 157
// is printed as output.
// Input format :
// The first line contains an integer sizel, representing the size of the first array arrl.
// The next line contains sizel space-separated integers, representing the elements of arrl.
// The third line contains an integer size, representing the size of the second array arr2.
// The next line contains size2 space-separated integers, representing the elements of arr2.
// Output format :
// If the intersection of the two arrays is empty, output "No common IDs found."
// Otherwise, output the space-separated common elements of the two arrays.
// Refer to the sample output for formatting specifications.
// Code constraints:
// 0 ‹= sizel, size2 ‹= 100 (Maximum size for arrays)
// -109 <= arrli], arr2[i] <= 101° elements of the arrays
// The arrays arrl and arr2 may contain duplicate elements.
// The arrays arrl and arr2 may not be sorted.

// You are using GCC
#include<iostream>
using namespace std;

void find(int* arr1, int size1, int* arr2, int size2){
    int lim=0;
    bool val =false;
    for(int i=0;i<size2;i++){
        for(int j=lim;j<size1;j++){
            if(arr2[i] == arr1[j]){
                cout << arr2[i] << " ";
                lim=j;
                val =true;
            }
        }
    }
    if(!val){
        cout << "No common IDs found";
    }
}
int main(){
    int a,b;
    cin >> a;
    int arr1[a];
    for(int i=0; i<a; i++){
        cin >> arr1[i];
    }
    cin >> b;
    int arr2[b];
    for(int i=0; i<b; i++){
        cin >> arr2[i];
    }
    find(arr1, a, arr2, b);
}