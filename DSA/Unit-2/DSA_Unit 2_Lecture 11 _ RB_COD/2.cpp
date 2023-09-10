// You are developing a program for a company to manage employee records. As part
// of the record management functionality, you need to implement a function that
// splits a grounded header-linked list of employee records into two separate lists: one
// for employees with even employee IDs and another for employees with odd
// employee IDs.
// Implement a function to split a grounded header linked list into two separate lists,
// dividing the elements based on their parity (even and odd.
// Note: This is a sample question asked in Infosys recruitment.
// Input format:
// The first line of input consists of the number of elements n in the list.
// The second line of input consists of n elements, separated by space.
// Output format:
// The first line of output prints the list of even elements.
// The second line of output prints the list of odd elements.

// Refer to the sample output for formatting specifications.

#include <iostream>
using namespace std;

class Node{
    public:
    int val;
    Node* next;
    
    Node(int val){
        this->val = val;
        next = NULL;
    }
};

void ins(Node* &head, int val){
    Node* n = new Node(val);
    
    if(head==NULL){
        head = n;
        return;
    }
    
    Node* temp = head;
    while(temp->next!=NULL){
        temp = temp->next;
    }
    temp->next = n;
}

void dispEven(Node* head){
    Node* temp = head;
    while(temp!=NULL){
        if(temp->val % 2 == 0){
            cout << temp->val << " ";
        }
        temp = temp->next;
    }
    cout << endl;
}

void dispOdd(Node* head){
    Node* temp = head;
    while(temp!=NULL){
        if(temp->val % 2 != 0){
            cout << temp->val << " ";
        }
        temp = temp->next;
    }
    cout << endl;
}

int main(){
    Node* head = NULL;
    int a;
    int line;
    cin >> a;
    while(a>0){
        cin >> line;
        ins(head,line);
        a--;
    }
    cout << "Even List: ";
    dispEven(head);
    cout << "Odd List: ";
    dispOdd(head);
}

