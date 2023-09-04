// John wants to write a program that requires the user to enter a username and password. The
// program should then read the user's input for the username and password and finally display the
// entered username and password.
// Note: This is a sample question asked in a TCS interview.
// Input format :
// The input consists of the user name and password, separated by space.
// Output format :
// The output prints the username and password on separate lines.

// You are using GCC
#include <iostream>
#include <string>
using namespace std;

int main(){
    string a,b;
    cin >> a;
    cin >> b;
    cout << "Name: " << a << endl;
    cout << "Password: " << b;
}