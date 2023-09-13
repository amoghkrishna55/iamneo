// You have been assigned the task of designing a program that converts a given sentence into its corresponding
// Morse code representation.
// Write a function convertToMorseCode that takes a sentence (string) as input and returns the sentence
// converted to Morse code. Each letter in the sentence should be replaced by its corresponding Morse code
// sequence. Spaces between words should be represented by a slash (/).
// Implement the function convertToMorseCode and write a main program to test it. The main program should
// prompt the user to enter a sentence and display the sentence in Morse code. The program takes only
// alphabets as inputs and converts all lowercase letters to uppercase letters before converting to Morse Code.
// Note: This kind of question helps in clearing TCS tests.
// Input format :
// The input consists of a paragraph.
// Output format :
// The output displays the Morse code conversion of the given sentence.
// Code constraints:
// Length of the paragraph < 1000 characters
// Space is converted to slash (/).
// The program takes only alphabets as inputs and converts all lowercase letters to uppercase letters before
// convertina to Merca Coda

#include <iostream>
#include <map>

using namespace std;

map<char, string> morseCodeMap = {
    {'A', ".-"}, {'B', "-..."}, {'C', "-.-."}, {'D', "-.."}, {'E', "."},
    {'F', "..-."}, {'G', "--."}, {'H', "...."}, {'I', ".."}, {'J', ".---"},
    {'K', "-.-"}, {'L', ".-.."}, {'M', "--"}, {'N', "-."}, {'O', "---"},
    {'P', ".--."}, {'Q', "--.-"}, {'R', ".-."}, {'S', "..."}, {'T', "-"},
    {'U', "..-"}, {'V', "...-"}, {'W', ".--"}, {'X', "-..-"}, {'Y', "-.--"},
    {'Z', "--.."}, {' ', "/"}
};

string convertToMorseCode(const string& sentence) {
    string morseCode;
    for (char ch : sentence) {
        ch = toupper(ch); 
        if (morseCodeMap.find(ch) != morseCodeMap.end()) {
            morseCode += morseCodeMap[ch] + " ";
        }
    }
    return morseCode;
}

int main() {
    string sentence;
    getline(cin, sentence);
    
    string morseCode = convertToMorseCode(sentence);
    
    cout<< morseCode << endl;
    
    return 0;
}