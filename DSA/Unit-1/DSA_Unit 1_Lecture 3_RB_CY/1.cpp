// You are developing a stock trading application that analyzes the price changes of a particular stock over a
// given time period. The application receives the daily closing prices of the stock, stored in array a, along with the
// corresponding threshold values for each day, stored in array b. Your task is to determine the number of
// instances where the price difference between consecutive days meets or exceeds the corresponding threshold.

// Write a program that takes the size of the arrays as input, followed by the elements of arrays a and b. The
// program should output the count of instances where the price difference between consecutive days meets or
// exceeds the corresponding threshold.

// Note: This kind of question will be helpful in clearing TCS recruitment.
// Input format:
// The first line of input consists of an integer n, the size of the arrays.
// The second line of input consists of n space-separated integers representing the daily closing prices of the
// stock,
// denoted as a[o] to a[n-1].
// The third line of input consists of n space-separated integers representing the threshold values for each day,
// denoted as b 0_ to b n-1.
// Output format:
// The output consists of a single line containing an integer, representing the count of instances where the price
// difference meets or exceeds the threshold.
// Code constraints:
// The size of the arrays will be a positive integer.
// The arrays a and b will have the same size.
// The elements in array a and b will be integers.

// You are using GCC
#include<iostream>
using namespace std;

int main(){
    int a,ans=0;
    cin >>a;
    int arr1[a],arr2[a];
    for(int x=0;x<a;x++){
        cin >> arr1[x];
    }
    for(int x=0;x<a;x++){
        cin >> arr2[x];
    }
    for(int x=0;x<a-1;x++){
        if(abs(arr1[x]-arr1[x+1]) >= arr2[x]){
            ans+=1;
        }
    }
    cout << ans;
}