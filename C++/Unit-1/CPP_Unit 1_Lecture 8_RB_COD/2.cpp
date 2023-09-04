// Alex is a math enthusiast who loves playing with numbers. One day, Alex came across a challenge
// to write a program that reverses a given number. Intrigued by the challenge, Alex decides to write
// a program using reference variables.
// Can you help Alex by creating a program that reverses the number using reference variables?
// Function Name: void reverseNumber

// Note: This is a sample question asked in a HCL interview.
// Input format :
// The input consists of a positive integer N.
// Output format :
// The output displays the reversed number N.

#include <iostream>
using namespace std;

void reverseNumber(int& a) {
    int rev = 0;
    while (a > 0) {
        int r = a % 10;
        rev = rev * 10 + r;
        a = a / 10;
    }
    a = rev;
}

int main() {
    int a;
    cin >> a;
    reverseNumber(a);
    cout << a << endl;
    return 0;
}
