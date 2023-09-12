// Imagine you are tasked with developing a program to manage employee information for a small company.
// Your program should allow the user to input data for two employees, including their ID, name, and salary. Once
// the data is collected, the program should display the details of both employees. Use this pointer to accomplish
// this task.
// Note: This is a sample question asked in an HCL interview.
// Input format:
// The input consists of two lines representing the employees details.
// Each line contains employee ID, Name, Salary separated by space.
// Output format:
// The output displays the employees details.

// Refer to the sample outputs for the formatting specifications.
// Code constraints:
// 1‹= ID <= 1000
// Length of name <= 100
// 1‹= Salary <= 106

// You are using GCC
#include<iostream>
#include<string>
using namespace std;

class emp{
    public:
    int id;
    string name;
    int salary;
    static int count;
    
    void input(){
        cin >> this->id;
        cin >> this->name;
        cin >> this->salary;
    }
    
    void display(){
        cout << "Employee " << count << " Details: " << endl;
        cout << "ID: " << this->id << endl;
        cout << "Name: " << this->name << endl;
        cout << "Salary: " << this->salary << endl;
        count++;
    }
};

int emp::count = 1;

int main(){
    emp obj1,obj2;
    obj1.input();
    obj2.input();
    obj1.display();
    obj2.display();
}