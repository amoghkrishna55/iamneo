// Dharun wants to build a program that generates an acronym for a given phrase.
// Implement a function that takes a string representing a phrase as input and returns
// its corresponding acronym. Use string objects to manipulate the input and generate
// the acronym.
// Function Name: string generateAcronym
// Note: This kind of question will be helpful in clearing Accenture tests.
// Input format:
// The input consists of a string representing the phrase that has to be abbreviated
// containing only upper-case and lower-case letters.
// Output format :
// The output prints the acronym of the given phrase in upper-case letters.
// Code constraints:
// The phrase contains only alphabets. No numbers or special characters should be
// used.
// Length of the phrase < 1000

#include<iostream>
#include<string>
using namespace std;

int main(){
    string line;
    getline(cin,line);
    string arc;
    arc += toupper(line[0]);
    for(int i = 0; i < line.size(); i++){
        if(line[i] == ' '){
            arc += toupper(line[i+1]);
        }
    }
    cout << arc << endl;
}

