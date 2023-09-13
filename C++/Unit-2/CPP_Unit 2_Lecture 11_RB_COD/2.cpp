// Ambika is designing a student information system for a school. Each student record
// consists of the student's name and age. Implement a program that allows Ambika to
// update the student's age using a pointer to a data member.
// Class Name: Student
// Note: This is a sample question asked in a Deloitte interview.
// Input format :
// The first line of input consists of the name of the student.
// The second line of input consists of the age of the student.
// The third line of input consists of the age to be updated.
// Output format :
// The first line of output displays the current or input age of the student.
// The second line of output displays the updated age of the student.
// Refer to the sample output for the formatting specifications.
// Code constraints:
// 3 <= length of the name <= 40
// 17 <= age <= 26

// You are using GCC
#include<iostream>
#include<string>
using namespace std;

class Age{
    public:
    int *oldA;
    string name;
    
    Age(string name){
        this->name = name;
        oldA = new int(0);
    }
};

int main(){
    string name;
    getline(cin,name);
    Age test(name);
    cin >> *(test.oldA);
    cout << "Current age: " << *(test.oldA) << endl;
    cin >> *(test.oldA);
    cout << "Updated age: " << *(test.oldA) << endl;
}