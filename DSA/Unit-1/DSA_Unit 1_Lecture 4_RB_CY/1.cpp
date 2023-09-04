// You are working on a project that involves merging two arrays and performing the sum between
// corresponding elements. The arrays represent the daily sales of two different products over a
// week. Your task is to write a program that takes input from the user for the two arrays and
// performs the difference between corresponding elements.
// Note: This is a sample question asked in TCS recruitment.
// Input format :
// The first line of input consists of the size of the array n.
// The second line of input consists of n elements inside the first array.
// The third line of input consists of the size of the array m.
// The fourth line of input consists of m elements inside the second array.
// Output format :
// The output represents the difference in the merge of the array.

// You are using GCC
#include <iostream>
using namespace std;

int main(){
    int a,b;
    int arr1[100],arr2[100];
    cin >>a;
    for(int x=0;x<a;x++){
        cin >>arr1[x];
    }
    cin >> b;
    for(int x=0;x<b;x++){
        cin >>arr2[x];
    }
    if(a>b){
        for(int x=0;x<b;x++){
            arr1[x] += arr2[x];
        }
        for(int x=0;x<a;x++){
            cout << -1*arr1[x] << " ";
        }
    }
    else{
        for(int x=0;x<a;x++){
            arr2[x] += arr1[x];
        }
        for(int x=0;x<b;x++){
            cout << -1*arr2[x] << " ";
        }
    }
}