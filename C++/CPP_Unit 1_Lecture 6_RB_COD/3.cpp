// Preethi is learning programming and she got interested in how inline functions work. So she has been practicing
// questions on that.
// Help her solve the code for the following question statement: Create an inline function isLeapYear) to check if a
// given year is a leap year.

// Note: This is a sample question asked in a Capgemini interview.
// Input format :
// The input consists of the year as an integer.
// Output format :
// The output displays whether the given year is a leap year or not.

// You are using GCC
#include <iostream>
using namespace std;

inline void isLeapYear(int year){
    if(year%4==0 && year%100!=0 || year%400==0){
        cout << year << " is a leap year.";
    }
    else{
        cout << year << " is not a leap year.";
    }
}

int main(){
    int year;
    cin >> year;
    isLeapYear(year);
}