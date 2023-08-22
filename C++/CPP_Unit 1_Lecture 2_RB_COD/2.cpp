// There was a massive tsunami in Kanyakumari. The buildings and other property were destroyed and valued at millions of dollars. While some of them were hurt and only a handful were safe, many people lost their lives.
// A news reporter shows up at the scene to assess the scenario involving the people who are alive, dead, and injured. He intended to publish it in the press and ask other nations to assist the affected citizens. Could you
// kindly write a program to generate a newspaper story to support him in this admirable cause?
// Note: This is sample question asked in a Wipro interview.
// Input format:
// The input consists of three integers on separate lines corresponding to the number of people who are dead, injured, and safe.
// Output format :
// The output displays the number of people who are dead, injured, and safe.

// You are using GCC
#include<iostream>
using namespace std;

int main(){
    int a, b, c;
    cin >> a >> b >> c;
    cout << "1)Dead: " << a << endl;
    cout << "2)Injured: " << b << endl;
    cout << "3)Safe: " << c << endl;
    cout << "Please help the people who are suffering!!!";
}