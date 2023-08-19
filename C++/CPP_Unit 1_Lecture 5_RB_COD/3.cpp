// A telecommunications company requires a program to validate and store phone numbers entered by their
// customers. They have a phone _number class that encapsulates the phone number and provides methods for
// inputting and outputting the number. Additionally, there is an inline function called check_num that performs
// validation on the entered phone number.
// Your task is to write a program that accepts a phone number from the user and validates it by checking if it is a
// valid 10-digit phone number or not.
// The program should implement an outside function declared inline and nesting of member functions.
// Function Specifications: inline void check_num(string num);
// Note: This is a sample question asked in a TCS interview.
// Input format :
// The input consists of a string representing the phone number.
// Output format :
// If the phone number is valid, the program should display the message "Your entered number is:
// ‹phone _number>".
// If the phone number is not valid, the program should display the message "Entered Phone number is wrong".
// Refer to the sample output for the format specifications.
// Code constraints:
// The phone number must contain exactly 10 digits.
// The program should not accept negative input.

// You are using GCC
#include <iostream>
#include <string>
using namespace std;

class phone_number{
    public:
    string num;
    void input_num(){
        getline(cin,num);
    }
};

inline void check_num(string num){
    int test = 1;
    if (num.length() == 10){
        for (char c : num){
            if (!isdigit(c)){
                test = 0;
                break;
            }
        }
    }
    else{
        test = 0;
    }
    
    if (test==0){
        cout << "Entered phone number is wrong" << endl;
    }
    cout << "Your entered number is:" << num;
}

int main(){
    phone_number pho;
    pho.input_num();
    check_num(pho.num);
}