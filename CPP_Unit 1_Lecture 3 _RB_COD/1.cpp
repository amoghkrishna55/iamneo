// Harish is learning about the days of the week. He wants to create a program that
// accepts a number representing a day of the week and prints the corresponding day's
// name.

// He decided to create a class called dayOfweek to handle this task. Use member
// functions to initialize and print the day of the week.

// Note: This is a sample question asked in an Accenture interview.
// Input format:
// The input consists of an integer N.
// Output format :
// The output displays the corresponding day of the week (I: Sunday, 2: Monday, 3:
// Tuesday, 4: Wednesday, 5: Thursday, 6: Friday, 7: Saturday, O: Weekend, above 7:
// Invalid).

// Code constraints:
// N <7

// You are using GCC
#include <iostream>
#include <string>
using namespace std;

class dayOfWeek{
    public:
    string arr[100] = { "Weekend" , "Sunday" , "Monday" , "Tuesday" , "Wednesday" , "Thursday" , "Friday" , "Saturday"};
    
    void ans(int num){
        cout << arr[num];
    }
};

int main(){
    int a;
    dayOfWeek week;
    cin >> a;
    if (a>7){
        cout << "Invalid";
    }
    else{
        week.ans(a);
    }
}