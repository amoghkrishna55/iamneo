// You are building a chatbot application that interacts with users through text messages. As part of the chatbot's
// functionality, you need to convert any sentence provided by the user into uppercase.
// Write a program that takes a sentence input from the user, converts it to uppercase using the manipulator
// function, and displays the modified sentence as the chatbot's response.
// Note: This is a sample question asked in an AMCAT interview.
// Input format :
// The input consists of the sentence that is given by the user.
// Output format :
// The output prints the modified uppercase sentence.

// You are using GCC
#include <iostream>
#include <string>
using namespace std;

int main(){
    string line;
    getline(cin,line);
    for(char& c : line){
        c = toupper(c);
    }
    cout << line;
}