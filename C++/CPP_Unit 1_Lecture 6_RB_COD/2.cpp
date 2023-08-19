// You are tasked with creating a program to analyze a series of test scores and provide statistical information.
// Write a program that calculates and displays the average, minimum, and maximum values of a given set of test
// scores using manipulator functions.

// The average, minimum, and maximum values should be displayed with two decimal places. The program
// should use manipulator functions to achieve the desired formatting.
// Note: This is a sample question asked in a Cocubes interview.
// Input format:
// The first line of input consists of the number of test scores N.
// The second line of input consists of the N test scores, separated by space.
// Output format :
// The first line of output prints the average value, rounded off to two decimal places.
// The second line of output prints the minimum value, rounded off to two decimal places.
// The last line of output prints the maximum value, rounded off to two decimal places.

// You are using GCC
#include <iostream>
#include <iomanip>
using namespace std;

double avg(double sum,int n){
    return sum/n;
}

double min(double arr[100],int n){
    double min = arr[0];
    for(int x=1;x<n;x++){
        if(arr[x]<min){
            min = arr[x];
        }
    }
    return min;
}

double max(double arr[100],int n){
    double max = arr[0];
    for(int x=1;x<n;x++){
        if(arr[x]>max){
            max=arr[x];
        }
    }
    return max;
}

int main(){
    int n;
    double arr[100], sum=0.0;
    cin >> n;
    for(int x=0;x<n;x++){
        cin >> arr[x];
        sum += arr[x];
        
    }
    cout << fixed << setprecision(2);
    cout << "Average: " << avg(sum,n) << endl;
    cout << "Minimum Value: " << min(arr,n) << endl;
    cout << "Maximum Value: " << max(arr,n);
    
}