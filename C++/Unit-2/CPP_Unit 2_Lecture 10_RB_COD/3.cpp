// You are tasked with creating a program to manage birthday dates. You need to implement a class called Date
// that represents a date with day, month, and year components. Additionally, you should use a pointer to an
// object to perform date operations.
// Input format :
// The first line of input consists of an integer representing the day of the birthday.
// The second line of input consists of an integer representing the month of the birthday.
// The next line of input consists of an integer representing the year of the birthday.
// Output format :
// The program should display the collected birthday data in the following format: The date is day/month/year".
// Code constraints:
// 1 <= Day <=31
// 1 <= Month <= 12
// 1500 <= Year <= 2040

// You are using GCC
#include<iostream>
using namespace std;

class Date{
    public:
    int day;
    int month;
    int year;
    
    void display(){
        cout << "The date is " << day << "/" << month << "/" << year << endl;
    }
};

int main(){
    Date *obj1 = new Date();
    cin >> obj1->day >> obj1->month >> obj1->year;
    obj1->display();
}