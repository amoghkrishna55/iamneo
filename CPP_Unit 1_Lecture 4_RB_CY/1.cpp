// Ranveer is working on an employee management system for a company. The system needs to store and
// process employee data, including their name, employee ID, years of experience, and salary. The program should
// be utilized to input and process the data for multiple employees.

// Create a structure named DEPT with the following fields: Name, emp-id, years_of _experience, and Basic salary.
// It then applies a salary increment based on the years of experience as follows:
// Define an array of structures for 'n' employees, check the following constraints, and print the results.
// Increase the salaries of those employees who have worked for 10 years or more by 10%.
// Increase the salaries of those employees who have experience ranging from 5 to 9 years by 5%.
// Increase the salaries of those employees who have experience ranging from 1 to 4 years by 2%.
// Note: This is a sample question asked in an Accenture interview.
// Input format :
// The first line of the input consists of the value of n.
// The next n lines of inputs are the name, ID, years of experience, and salary, separated by a space.
// Output format :
// The output prints the employee details with updated salaries.

// Refer to the sample outputs for the formatting specifications.

// You are using GCC
#include<iostream>
#include<string>
using namespace std;

struct DEPT{
    string name;
    int empid;
    int year;
    int salary;
};

int main(){
    int a;
    cin >> a;
    for(int x = 0; x<a ; x++){
        DEPT dep;
        cin >> dep.name >> dep.empid >> dep.year >> dep.salary;
        if(dep.year>=10){
            dep.salary += 0.1*dep.salary;
        }
        else if(dep.year >= 5 && dep.year <= 9){
            dep.salary += 0.05*dep.salary;
        }
        else if(dep.year >=1){
            dep.salary += 0.02*dep.salary;
        }
        cout << "Employee Name : " << dep.name << endl;
        cout << "Employee Id : " << dep.empid << endl;
        cout << "years of experience : " << dep.year << endl;
        cout << "salary : " << dep.salary << endl;
        cout << endl;
    }
}