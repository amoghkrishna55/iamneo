// Janu enjoys learning puzzles from her childhood. She is given an N*M matrix and
// asked to sum the elements in each row. She needs to attain the sum of elements in a
// matrix.
// Input format:
// The first line of input consists of a row count.
// The second line of input consists of the column count.
// The third line of input consists of a matrix element.
// Output format :
// The output is the matrix elements, with the sum of each row.
// Refer to the output for formatting specifications.
// Code constraints:
// O>N<=10
// O>M<=10

// You are using GCC
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
    
    for(int i=0;i<a;i++){
        int sum = 0;
        for(int j=0;j<b;j++){
            cout << arr[i][j] << " ";
            sum += arr[i][j];
        }
        cout << "\tSUM: " << sum << endl; 
    }
}