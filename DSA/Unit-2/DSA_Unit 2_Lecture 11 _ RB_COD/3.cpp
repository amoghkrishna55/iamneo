// You are developing a contact management system for a mobile application. The
// system allows users to maintain a list of their contacts. Whenever a user adds a new
// contact, the system should add it at the end of the contact list.
// Write a program to implement the code to perform insertion at the end using
// Grounded Header Linked List.
// Note: This is a sample question asked in a TCS interview.
// Input format :
// The first line represents the size of element n.
// The next n lines store the values in it.
// Output format :
// The output represents the updated list with the nodes added at the end.

// You are using GCC
#include<iostream>
using namespace std;

class Node{
    public:
    int val;
    Node* next;
    
    Node(int val){
        this->val=val;
        next = NULL;
    }
};

void ins(Node* &head, int val){
    Node* n = new Node(val);
    
    if(head==NULL){
        head=n;
        return;
    }
    
    Node* temp = head;
    while(temp->next!=NULL){
        temp = temp->next;
    }
    temp->next = n;
}

void disp(Node* head){
    Node* temp = head;
    if(temp == NULL){
        cout << "Empty linked list" << endl;
        return;
    }
    while(temp!=NULL){
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
    disp(head);
}