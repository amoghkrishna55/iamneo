// Seema is learning about void pointers and their applications. Help her to write a program that
// takes an integer and a character. The program should check the following:
// 1. If the integer is positive, negative, or zero.
// 2. If the character is an alphabet, number, or not.
// Display appropriate messages for everything.
// Note: This is a sample question asked in an IBM interview.
// Input format :
// The first line of input consists of an integer, n.
// The second line of input consists of a character, c.
// Output format :
// The first line of output consists of one of the following:
// If the integer is a positive integer, the output prints "The number is positive.".
// If the integer is a negative integer, the output prints "The number is negative.".
// If the integer is zero, the output prints "The number is zero.".
// The second line of output consists of one of the following.
// If the character is an alphabet, the output prints "The character is an alphabet.".
// If the character is a number, the output prints "The character is a number.".
// If the character is neither an alphabet nor a number, the output prints "The character is not a
// number or an alphabet.".
// Code constraints:
// -105 < n < 105

// You are using GCC
#include<iostream>
using namespace std;

void check(void *ptrn, void *ptra){
    int *ptr1 = (int *) ptrn;
    char *ptr2 = (char *) ptra;
    
    if(*ptr1>0){
        cout << "The number is positive." << endl;
    }
    else if(*ptr1<0){
        cout << "The number is negative." << endl;
    }
    else{
        cout << "The number is zero." << endl;
    }
    
    if('a' <= *ptr2 && *ptr2 <= 'z' || 'A' <= *ptr2 && *ptr2 <= 'Z'){
        cout << "The character is an alphabet." << endl;
    }
    else if('0' <= *ptr2 && '9' >= *ptr2){
        cout << "The character is a number." << endl;
    }
    else{
        cout << "The character is not a number or an alphabet.";
    }
}

int main(){
    int a;
    char b;
    cin >> a >> b;
    check(&a,&b);
}