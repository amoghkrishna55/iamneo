// The prime functionality of an Event Management System is budgeting. An Event Management System should
// estimate the total expenses incurred by an event and the percentage rate of each of the expenses involved in
// planning and executing the event.
// Nikhil, the founder of "Pine Tree" wanted to include this functionality in his company's Proton Event Management
// System and requested your help in writing a program for the same.
// The program should get the branding expenses, travel expenses, food expenses, and logistics expenses as
// input from the user and calculate the total expenses for an event and the percentage rate of each of these
// expenses using pointer arithmetic.
// Function Name: void calculateExpenses
// Note: This is a sample question asked in an Infosys interview.
// Input format :
// The first input consists of branding expenses.
// The second input consists of travel expenses.
// The third input consists of food expenses.
// The fourth input consists of logistics expenses.
// Output format :
// The first line of the output displays the total expenses for the Event.
// The second line of output displays the percentage of the branding expenses.
// The third line of output displays the percentage of travel expenses.
// The fourth line of output displays the percentage of food expenses.
// The fifth line of output displays the percentage of the logistics expenses.
// Note: All outputs are rounded off to two decimal places.

// Refer to the sample output for formatting specifications.
// Code constraints:
// All inputs are less than 105

#include <iostream>
#include <iomanip>
using namespace std;

class money {
    public:
    int brand;
    int travel;
    int food;
    int logi;
    
    void total() {
        double ttl = brand + travel + food + logi;
        cout << fixed << setprecision(2);
        cout << "Total expenses: Rs." << ttl << endl;
        cout << "Branding expenses percentage: " << (brand / ttl) * 100 << endl;
        cout << "Travel expenses percentage: " << (travel / ttl) * 100 << endl;
        cout << "Food expenses percentage: " << (food / ttl) * 100 << endl;
        cout << "Logistics expenses percentage: " << (logi / ttl) * 100 << endl;
    }
};

int main() {
    money mon;
    cin >> mon.brand >> mon.travel >> mon.food >> mon.logi;
    mon.total();
    return 0;
}
