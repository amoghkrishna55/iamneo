// Sharu is working on a project that involves handling matrices. As a part of her project,
// she needs to swap two rows of a given matrix. She wants to create a program to
// accomplish this task efficiently. Sharu would like your help in writing this program.
// Write a program using the Matrixswap class.
// Input format:
// The first line of input consists of the values N and M, representing the number of rows
// and columns in the matrix, separated by space.
// The next N lines of input contain M space-separated elements of the matrix.
// The last line of input consists of two space-separated integers, rl, and r2, representing
// the row numbers to be interchanged.
// Output format :
// If the row selection process is successful and the rows are interchanged, print the
// resulting matrix.
// If the row selection process fails and invalid row numbers are provided, print the
// message "Invalid row numbers".
// Refer to the sample output for formatting specifications.
// Code constraints:
// 1<= N. M <=10
// r1, r2 <= N

#include<iostream>
using namespace std;

int main(){
    int a,b;
    cin >> a >> b;
    int arr[a][b];
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            cin >> arr[i][j];
        }
    }
    int c,d;
    cin >> c >> d;
    if(c>a || d>b || c==0 || d==0){
        cout << "Invalid row numbers";
        return -1;
    }
    for(int j=0;j<b;j++){
        swap(arr[c-1][j],arr[d-1][j]);
    }
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}