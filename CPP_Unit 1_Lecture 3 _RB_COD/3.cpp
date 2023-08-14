// Ragu wants to create a program to store and display personal information about
// individuals. He decided to create a class called Person to represent a person's details
// with a name, age, and gender as their private attributes. Initialize and display the
// same using member functions. The name and gender should be displayed in
// uppercase letters.

// Note: This is a sample question asked in an Infosys interview.
// Input format :
// The input consists of the name as a string, age as an integer, and gender as a string of
// a person in separate lines.
// Output format:
// The output displays the name, age, and gender of the person separated by spaces.
// The name and gender should be printed in uppercase letters.

// You are using GCC
#include <iostream>
#include <string>
using namespace std;

class Person{
    int age;
    string upper();
    string name , gender;
    
    public:
    
    void input(){
        cin >> name >> age >> gender;
    }
    
    void display(){
        cout << upper(name) << " ";
        cout << age << " ";
        cout << upper(gender);
    }
    
    string upper(string name){
        string ans = "";
        for(int x=0; x<name.length(); x++){
            ans+=toupper(name[x]);
        }
        return ans;
    }
};

int main(){
    Person info;
    info.input();
    info.display();
}