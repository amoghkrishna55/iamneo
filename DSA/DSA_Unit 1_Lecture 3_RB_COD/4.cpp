// You are a skilled software engineer working at a renowned financial analysis company. Your
// company is renowned for its expertise in analyzing stock market data to provide valuable insights
// and recommendations to clients. As part of your role, you have been entrusted with developing a
// program that filters out negative stock prices from an array of daily closing prices.
// Note: This kind of question will be helpful in clearing TCS recruitment.
// Input format :
// The first line should include the size of the array, which represents the number of closing prices.
// The second line should include the closing prices of the stocks, separated by spaces.
// Output format :
// The program will exhibit a line presenting the updated array, consisting exclusively of positive
// closing prices

// Refer to the sample input and output formatting specifications.
// Code constraints:
// The array size is limited to a maximum of 100.
// The closing prices can be positive, negative, or zero.
// The closing prices are represented as double values.

// You are using GCC
#include<iostream>
using namespace std;

int main(){
    int a;
    float arr[100];
    cin >> a;
    for(int x=0;x<a;x++){
        cin >> arr[x];
    }
    for(int x=0;x<a;x++){
        if(arr[x]<0){
            for(int y=x;y<a;y++){
                arr[y] = arr[y+1];
            }
            --a;
            --x;
        }
    }
    cout << "Updated Array with Positive Closing Prices: ";
    for(int x=0;x<a;x++){
        cout << arr[x] << " ";
    }
}