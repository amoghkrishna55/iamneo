// Farhana is fond of coding and she is learning structure and union concepts. While practicing questions she
// came across a question that uses the union concept. Since she is only familiar with structures, she is unable to
// solve this. Help her solve the question. The question is given below:
// Write a C++ program to store and display information about an employee using a union. The program should
// prompt the user to enter the employee ID, name, date of birth (DOB), date of joining (DOJ), and salary. The
// program should then display the entered information.
// Union name: Employee

// Note: This is a sample question asked in a TCS interview.
// Input format :
// The first line contains an integer representing the employee ID.
// The second line contains a string representing the employee's name.
// The third line contains a string representing the date of birth in the format "dd/mm/yyyy".
// The fourth line contains a string representing the date of joining in the format "dd/mm/vyvy".
// The fifth line contains a floating-point number representing the salary.
// Output format :
// The first line displays the employee ID of the employee.
// The second line displays the employee's name.
// The third line displays the date of birth of the employee.
// The fourth line displays the employee's date of joining.
// The fifth line displays the salary of the employee rounding to one decimal place.
// Refer to the sample output for the formatting specifications.
// Code constraints:
// The maximum length of the employee's name is 20 characters.
// The maximum length of the date of birth and date of joining is 10 characters.

// You are using GCC
#include<iostream>
#include<string>
using namespace std;

union Employee{
    int id;
    string name;
    string dob;
    string doj;
    double salary;
};

int main(){
    union Employee;
    int id;
    string name, dob, doj;
    double salary;
    cin >> id >> name >> dob >> doj >> salary;
    cout << "ID : " << id << endl;
    cout << "Name : " << name << endl;
    cout << "DOB : " << dob << endl;
    cout << "DOJ : " << doj << endl;
    cout << "Salary : " << salary;
}