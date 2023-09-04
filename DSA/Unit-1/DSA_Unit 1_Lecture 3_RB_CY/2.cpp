// You are working on a scheduling application that manages the rotation of employees' shifts in a
// company. The application receives an array of employee IDs representing the current shift
// assignment. Your task is to rotate the shifts by a specified number of positions to accommodate
// changes in work schedules.

// Write a program that takes the size of the employee array, followed by the employee IDs, and the
// number of positions to rotate. The program should output the updated shift assignment after the
// rotation.
// Input format :
// The first line of input consists of an integer num, representing the number of employees.
// The second line of input consists of num space-separated integers representing the current shift
// assignment.
// The third line of input consists of an integer d, representing the number of positions to rotate.
// Output format :
// The output consists of a single line containing num space-separated integers, representing the
// updated shift assignment after rotation.
// Code constraints:
// The size of the employee array will not exceed 1000.
// The number of positions to rotate will be a non-negative integer.

// You are using GCC
#include <iostream>
using namespace std;

int main(){
    int a,arr[1000],b;
    cin >> a;
    for(int x=0;x<a;x++){
        cin >> arr[x];
    }
    cin >> b;
    for(int x=0;x<b;x++){
        int temp = arr[0];
        for(int y=1;y<a;y++){
            arr[y-1] = arr[y];
        }
        arr[a-1] = temp;
    }
    for(int x=0;x<a;x++){
        cout << arr[x] << " ";
    }
}