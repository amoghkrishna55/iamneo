// Emily is developing a word processing tool for a publishing company. As part of the tool, she
// needs to implement a feature that counts the number of words in a given string.
// Write a program that prompts the user to enter a string. The program should use linear search to
// find the count of words in the string. Words in the string are separated by spaces, tabs, or newline
// characters. The program should then display the count of words.
// This feature will greatly assist writers, editors, and content creators in analyzing and managing
// their text content. It enables them to easily determine the number of words in a document or a
// specific section of text. Emily's tool empowers users with accurate word count information,
// facilitating efficient writing and editorial processes.
// Note: This is a sample question asked in Capgemini recruitment.
// Input format :
// The input consists of the sentence.
// Output format:
// The output prints the count of words in the given string.

#include <iostream>
#include <string>
using namespace std;

int main() {
    string line;
    int wordCount = 0;
    bool inWord = false;
    
    getline(cin, line);
    
    for (char& s : line) {
        if (s == ' ' || s == '\t' || s == '\n') {
            if (inWord) {
                inWord = false;
                wordCount++;
            }
        } else {
            inWord = true;
        }
    }
    
    if (inWord) {
        wordCount++;
    }
    
    cout << wordCount << endl;
}

   