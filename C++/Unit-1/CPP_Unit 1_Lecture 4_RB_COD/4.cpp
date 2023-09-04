// Vasanth is developing a letter analyzer program that determines whether a given character is a
// vowel or a consonant. The program utilizes the LetterAnalyzer class to analyze the input character
// and provide the corresponding analysis result.

// Create an enum class called LetterType with vowel, consonant and invalid.

// Write a program that takes a single character as input from the user and determines whether it is
// a vowel or a consonant. Your program should display "vowel" if the character is one of the vowels
// (a, e, i, o, u, A, E, I, O, U) and "consonant" otherwise.
// Note: This is a sample question asked in an HCL interview.
// Input format:
// The input consists of a character.
// Output format :
// If the input is a vowel, the output displays "vowel".
// If the input is a consonant, the output displays "consonant".
// Otherwise, the output displays "Invalid input".
// Refer to the sample output for formatting specifications.
// Code constraints:
// The input considers lower-case and upper-case letters as vowels and consonants.

// You are using GCC
#include <iostream>
#include <cctype>
using namespace std;

enum LetterType{
    VOWEL,CONSONANT,INVALID
};

class LetterAnalyzer{
    public:
    static LetterType analyze(char c){
        if(isalpha(c)){
            c = tolower(c);
            if(c=='a' || c=='e' || c=='i' || c=='o' || c=='u'){
                return LetterType::VOWEL;
            }
            else{
                return LetterType::CONSONANT;
            }
        }
        else{
            return LetterType::INVALID;
        }
    }
};

int main(){
    LetterAnalyzer ana;
    char c;
    cin >>c;
    LetterType type = ana.analyze(c);
    switch(type){
        case LetterType::VOWEL:
        cout << "vowel";
        break;
        
        case LetterType::CONSONANT:
        cout << "consonant";
        break;
        
        case LetterType::INVALID:
        cout << "Invalid input";
    }
}