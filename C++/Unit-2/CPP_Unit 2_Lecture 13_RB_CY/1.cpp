// You have been given the task of building a program that converts a given sentence into Leet
// Speak, a modified form of English using character substitutions.
// Write a function toLeetSpeak that takes a sentence (string) as input and returns the Leet Speak
// representation of the sentence, where only the vowels are replaced with their Leet Speak
// counterparts.
// Implement the function toLeetSpeak and write a main program to test it. The main program
// should prompt the user to enter a sentence and then display the corresponding LeetSpeak
// representation.
// In this problem,
// -a A is replaced with 4
// -e/E is replaced with 3
// -i/l is replaced with I
// -o/O is replaced with O
// -u/U is replaced with v
// Note: This kind of question helps in clearing TCS tests.
// Input format :
// The input consists of a sentence.
// Output format :
// The program outputs the Leet Speak representation of the sentence, where only the vowels are
// replaced with their Leet Speak counterparts.
// Code constraints :
// The input sentence can contain alphabetic characters, digits, punctuation marks, and spaces.
// The sentence can have a maximum length of 1,000 characters.

#include<iostream>
#include<string>
using namespace std;

int main(){
    string line;
    getline(cin,line);
    for(char &s : line){
        if(s=='a' || s=='A'){
            s = '4';
        }
        else if(s=='e' || s=='E'){
            s = '3';
        }
        else if(s=='i' || s=='I'){
            s = '1';
        }
        else if(s=='o' || s=='O'){
            s = '0';
        }
        else if(s=='u' || s=='U'){
            s = 'v';
        }
    }
    cout << line << endl;
    return 0;
}
