// Design a banking system to handle account transactions. The system should allow users to
// deposit and withdraw money from their accounts. Each account is associated with an account
// holder's name, account number, and balance. Implement the system using a union named
// "AccountData" that contains a structure with fields for the account holder's name, account
// number, and balance. Define functions to deposit and withdraw money from the account.
// Note: This is a sample question asked in a Wipro interview.
// Input format :
// The first line consists of the account holder's name (up to 50 characters).
// The second line consists of the account number (an integer).
// The third line consists of the initial balance (a floating-point number).
// The fourth line consists of the amount to deposit (a floating-point number).
// The fifth line consists of the amount to withdraw (a floating-point number).
// Output format :
// If a deposit is successful, it says "Amount deposited successfully."
// If a withdrawal is successful, it says "Amount withdrawn successfully."
// If a withdrawal fails due to insufficient balance: "Insufficient balance. Withdrawal failed."
// The account details are displayed in the following format:
// "Account holder's name: [account holder's name
// "Account number: [account number!"
// "Balance: [balance]"

// You are using GCC
#include <iostream>
#include <string>
using namespace std;

union AccountData{
    int acc, bal, dep, wit;
};

int main(){
    string name;
    AccountData datat;
    int acc,bal,dep,wit;
    getline(cin,name);
    cin >> acc >> bal >> dep >> wit;
    bal += dep;
    cout << "Amount deposited successfully." << endl;
    if (bal>=wit){
        bal -= wit;
        cout << "Amount withdrawn successfully." << endl;
    }
    else{
        cout << "Insufficient balance. Withdrawal failed." << endl;
    }
    cout << "Account details:" << endl;
    cout << "Account holder's name: " << name << endl;
    cout << "Account number: " << acc << endl;
    cout << "Balance: " << bal;
}