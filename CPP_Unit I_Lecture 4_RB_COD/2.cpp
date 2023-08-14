// The task for the student is to create a program that prompts the user to enter a number
// representing a month and displays the corresponding month as output. To accomplish this, the
// student should implement a class named Year that includes an enumeration called Month. The
// Month enumeration should consist of twelve constants representing the months of the year. The
// student needs to ensure that the program utilizes the Year class and the Month enumeration to
// correctly map the input number to the corresponding month name for display.

// Note: This is a sample question asked in an Infosys interview.
// Input format :
// The input consists of an integer representing the desired month number, n.
// Output format :
// If the input is a valid month (between 1 and 12), the output displays the corresponding month as a
// string.
// If the input is invalid, display "Invalid month input".
// Refer to the sample output for the formatting specifications.
// Code constraints:
// 1‹= n ‹= 12

// You are using GCC
#include<iostream>
#include<string>
using namespace std;


class Year{
    public:
    string arr[100] = {"JANUARY", "FEBRUARY", "MARCH", "APRIL", "MAY", "JUNE", "JULY", "AUGUST", "SEPTEMBER", "OCTOBER", "NOVEMBER", "DECEMBER"};
    string ans(int x){
        return arr[x];
    }
};

enum Month{
};

int main(){
    enum Month month;
    Year year;
    int a;
    cin >> a;
    if (a>0 && a<=12){
        cout << "Month: " << year.ans(a-1);
    }
    else{
        cout << "Invalid month input";
    }
}