// You are developing a Shift Schedule Management System for a company. The system maintains
// a list of employees and their shift assignments. Each employee is represented as a node in a
// linked list, where each node contains an integer representing the shift number.
// Your task is to implement a feature that allows left-shifting of the shift schedule by a given
// number of shifts. This is required when there are changes in the company's work schedule or
// staffing requirements.
// Note: This is the sample question asked in Microsoft recruitment.
// Input format :
// The first line contains an integer 'N' representing the number of shifts in the schedule.
// The next N space integer represents the shift numbers for each shift.
// The last line contains an integer k representing the number of shifts to left-shift the schedule.
// Output format :
// Tie first line of output should display the original linked list representing the shift schedule.
// The next line should display the modified linked list after left-shifting the schedule by 'k' shifts.
// Code constraints:
// The linked list represents the employee shift schedule.
// Each node in the linked list contains an integer representing the shift number.
// The shift schedule can be left-shifted by a positive integer k, where 'K'is less than or equal to the
// length of the linked list.
// The left-shift operation should preserve the order of shifts.

// You are using GCC
#include<iostream>
using namespace std;

class Node{
    public:
    int val;
    Node* next;
    Node(int val){
        this->val=val;
        next=NULL;
    }
};

void ins(Node* &head, int val){
    Node* n = new Node(val);
    
    if(head==NULL){
        n->next = n;
        head=n;
        return;
    }
    
    Node* temp = head;
    
    while(temp->next!=head){
        temp=temp->next;
    }
    temp->next = n;
    n->next = head;
}

void mov(Node* &head,int val){
    while(val>0){
        head = head->next;
        val--;
    }
}

void disp(Node* head){
    Node* temp = head;
    cout << temp->val << " ";
    temp=temp->next;
    while(temp!=head){
        cout << temp->val << " ";
        temp=temp->next;
    }
    cout << endl;
}

int main(){
    Node* head = NULL;
    int a,b;
    cin >> a;
    while(a>0){
        cin >> b;
        ins(head,b);
        a--;
    }
    cin >> b;
    cout << "Original Linked List: ";
    disp(head);
    mov(head,b);
    cout << "Modified Linked List after left shift: ";
    disp(head);
}