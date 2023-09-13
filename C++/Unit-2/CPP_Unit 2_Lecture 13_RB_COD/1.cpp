// Sena wants to upskill in C+ + by learning about member functions. Help him solve the following question: Create
// a class called BankATM to represent an ATM machine having attributes: ATM ID (integer), location (string), and
// available cash (float).
// Implement member functions to withdraw cash, deposit cash, and display the current available cash in the
// ATM.
// Note: This kind of question helps in clearing Mettl tests.
// Input format :
// The input consists of the following in separate lines:
// An integer value for the ATM ID.
// A string for the location of the ATM.
// A floating-point value for the available cash in the ATM.
// A floating-point value representing the amount to withdraw.
// A floating-point value representing the amount to deposit.
// Output format :
// The output prints the following:
// For a successful withdrawal, it should display
// "Withdrawal successful. Available cash: [cash]" where [cash] is the updated available cash in the ATM after
// withdrawal, displayed with one decimal place.
// For an unsuccessful withdrawal: it should display: "Insufficient cash in the ATM."
// After a successful deposit, it should display:
// "Deposit successful. Available cash: [cash]" where [cash] is the updated available cash in the ATM after deposit,
// displayed with one decimal place.

// Finally, it should display the available cash in the ATM:
// "Available cash in ATM: [cash]" where [cash] is the available cash in the ATM, displayed without any decimal
// places.

#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    
    int pin;
    string bank;
    float balance,withdraw,deposit;
    
    cin>>pin;
    cin.ignore();
    getline(cin,bank);
    cin>>balance;
    cin>>withdraw;
    cin>>deposit;
    
    cout<<fixed<<setprecision(1);
    if(withdraw>balance){
        cout<<"Insufficient cash in the ATM."<<endl;
    }
    
    else{
        balance=balance-withdraw; 
        cout<<"Withdrawal successful. Available cash: "<<balance<<endl;
    }
    balance=balance+deposit;
    cout<<"Deposit successful. Available cash: "<<balance<<endl;
    cout<<"Available cash in ATM: "<<balance<<endl;
    
    
    return 0;
}
