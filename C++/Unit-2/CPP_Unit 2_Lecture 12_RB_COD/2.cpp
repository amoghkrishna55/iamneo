// Imagine you are a student attending a class on matrices, and your teacher has
// introduced a practical exercise to check whether two batches of matrices are
// identical or not. Your task is to create a program to solve this problem using an array
// of objects to represent matrices.
// Input format :
// The first line consists of two space-separated integers: m and n representing the
// number of rows and columns of the matrices A and B, respectively.
// The next m lines each contain n space-separated integers representing the elements
// of matrix A.
// The next m lines each contain n space-separated integers representing the elements
// of matrix B.
// Output format :
// The output displays either "Equal" or "Not Equal" based on the comparison of the two
// matrices A and B.
// Code constraints:
// MAX ROWS = 10
// MAX_COLS =10
// MAX_Matrices = 2
// 1 < m, n <= 10
// -20 <= matrix elements < = 20

#include<iostream>
using namespace std;

int main(){
    int a,b;
    cin >> a >> b;
    int arr[a][b],arr1[a][b];
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            cin >> arr[i][j];
        }
    }
    
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            cin >> arr1[i][j];
        }
    }
    bool val = true;
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            if(arr[i][j]!=arr1[i][j]){
                val = false;
                break;
            }
        }
    }
    if(val){
        cout << "Equal";
    }
    else{
        cout << "Not Equal";
    }
}