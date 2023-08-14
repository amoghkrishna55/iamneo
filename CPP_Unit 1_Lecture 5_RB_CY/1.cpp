// Imagine you are developing a digital diary application that allows users to record important moments and
// events with timestamps. As part of this application, you need to create a program that fetches the hours,
// minutes, days, months, and years from the user and stores them in a class member function. The program
// should then display the date, time, and minutes from another member function in the class.
// Your task is to write a program that prompts the user to enter the hours, minutes, days, months, and years.
// Implement a class that includes a member function to initialize these values and another member function to
// display the formatted date, time, and minutes. This program will enable users to keep track of their important
// moments with accurate timestamps in an organized manner within the digital diary application.

// Note: This is a sample question asked in a Capgemini interview.
// Input format :
// The input consists of hours, minutes, days, months, and years in the same order separated by a space.
// Output format :
// The output displays the date, time, and total minutes as shown in the sample outputs.
// If the outputs are not valid, the output displays "Invalid".
// Code constraints:
// O < Date <= 31
// 0 < Month <= 12
// 0 < Year < 9999
// 0 < hours < 24
// 0 ‹ minutes < 60

// You are using GCC
#include<iostream>
using namespace std;

class Track{
    public:
    int hrs,mins,day,month,year;
    
    int totalMinutes(){
        return hrs*60 + mins;
    }
    
    void input(){
        cin >> hrs >> mins >> day >> month >> year;
        if( 0<day && day<=31 && month>0 && 12>=month && 0<year && year<9999 && 0<hrs && 24>hrs && 0<mins && 60>mins){
            cout << "Date:" << day << "-" << month << "-" << year << endl;
            cout << "Time:" << hrs << " hrs " << mins << " mins" << endl;
            cout << "Total mins:" << totalMinutes();
        }
        else{
            cout << "Invalid";
        }
    }
};

int main(){
    Track track;
    track.input();
}