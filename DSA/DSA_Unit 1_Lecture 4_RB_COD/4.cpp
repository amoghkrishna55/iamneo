// You are developing a program that merges two sorted arrays of student IDs.
// The first array contains the student IDs of students who have successfully completed Course A,
// while the second array contains the student IDs of students who have successfully completed
// Course B. Your task is to merge these two arrays into a single array that will be used for further
// analysis.
// Note: This is a sample question asked in Capgemini recruitment.
// Input format :
// The first line of input consists of the size of the array n.
// The second line of input consists of n elements inside the first array.
// The third line of input consists of the size of the array m.
// The fourth line of input consists of m elements inside the second array.
// Output format :
// The output represents the merged array, such that the elements of the second array are placed
// first, separated by space.

// You are using GCC
#include <iostream>
using namespace std;

int main(){
    int a,b;
    int arr1[100],arr2[100];
    cin >> a;
    for(int x=0;x<a;x++){
        cin >> arr1[x];
    }
    cin >> b;
    for(int x=0;x<b;x++){
        cin >> arr2[x];
    }
    for(int x=b;x<a+b;x++){
        arr2[x] = arr1[x-b];
    }
    for(int x=0;x<a+b;x++){
        cout << arr2[x] << " ";
    }
}