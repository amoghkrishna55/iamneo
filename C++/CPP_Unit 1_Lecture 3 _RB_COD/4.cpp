// Guna wants to write a program that counts the number of occurrences of a specific character in
// a given string.
// He decided to create a class called Occurrence to handle this task. In the class, a string and
// character are its private attributes. Initialize the variables using a member function. Define a
// member function countOccurrence () to count the number of times the character occurs in the
// string.

// Note: This is a sample question asked in a Capgemini interview.
// Input format :
// The first line of input consists of a string, str.
// The second line of input consists of a single character, ch, which represents the character to be
// counted for its occurrence in the string.
// Output format:
// The output displays a single integer representing the count of occurrences of the character ch in
// the given input string str.

#include<iostream>
#include<string>
using namespace std;

class Occurrence{
    char a;
    string line;
    
    public:
    int count = 0;
    void set(char x , string data){
        line = data;
        a = x;
    }
    
    int countOccurrence(){
        for(char q : line){
            if (q == a){
                count +=1;
            }
        }
        return count;
    }
    
};

int main(){
    char a;
    Occurrence oc;
    string line;
    cin >> line >> a;
    oc.set(a,line);
    cout << oc.countOccurrence();
}