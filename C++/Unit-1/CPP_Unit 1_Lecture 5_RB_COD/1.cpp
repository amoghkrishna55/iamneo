// A text-processing application needs a module to manipulate strings. The module should provide functionalities
// to set a string, count the number of characters, find the length of the string, convert the string to uppercase,
// convert the string to lowercase, and retrieve the string.
// You are tasked with implementing a StringManipulator class that performs various operations on a given string.
// The class provides methods to count the number of characters in the string, find the length of the string, convert
// the string to uppercase, and convert the string to lowercase.
// Ensure that the class correctly manipulates the string and provides the expected results for each operation.
// Note: Use the Non-inline member function.
// Note: This is a sample question asked in a mPhasis interview.
// Input format :
// The input consists of a string.
// Output format :
// The first line of the output displays the number of characters in the string.
// The second line of the output displays the length of the string.
// The third line of the output displays the uppercase version of the string.
// The last line of the output displays the lowercase version of the string.
// Refer to the sample output for formatting specifications.
// Code constraints :
// The input string can contain alphanumeric characters, symbols, spaces, and punctuation marks.
// The maximum length of the input string is 1000 characters.

// You are using GCC
#include <iostream>
#include <string>
#include <cctype>
using namespace std;

class StringManipulator{
    public:
    string line;
    int countCharacters();
    int findLength();
    void convertToUppercase();
    void convertToLowercase();
    void setString(const string& s);
};

void StringManipulator::setString(const string& s){
    line = s;
}

int StringManipulator::countCharacters(){
    return line.length();
}

int StringManipulator::findLength(){
    return countCharacters();
}

void StringManipulator::convertToUppercase(){
    for(char& c : line){
        c = toupper(c);
    }
}

void StringManipulator::convertToLowercase(){
    for(char& c : line){
        c = tolower(c);
    }
}

int main(){
    string line;
    StringManipulator manip;
    getline(cin,line);
    manip.setString(line);
    cout << "Number of characters: " << manip.countCharacters() << endl;
    cout << "Length of the string: " << manip.findLength() << endl;
    manip.convertToUppercase();
    cout << "Uppercase string: " << manip.line << endl;
    manip.convertToLowercase();
    cout << "Lowercase string: " << manip.line;
}