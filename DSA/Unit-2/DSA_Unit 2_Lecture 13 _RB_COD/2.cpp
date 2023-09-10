// You are tasked with developing a program for a task management system that utilizes a doubly linked list to
// track and manage tasks. Each node in the doubly linked list represents a task with a unique ID. The program
// should allow for inserting tasks at the front, deleting tasks from the front and end of the list, and displaying the
// updated list of tasks after each operation.
// Implement a doubly linked list where elements can be inserted at the front and deleted from the front and end
// of the list.
// Note: This is a sample question asked in an Infosys interview.
// Input format :
// The first line contains an integer n, representing the number of elements to insert.
// The next line contains n space-separated integers representing the elements to be inserted at the front of the
// linked list.
// Output format :
// The output consists of three parts:
// After inserting all the elements at the front, display the elements in the linked list.
// After deleting the node at the front, display the updated linked list.
// After deleting the node at the end, display the final linked list.
// Refer to the sample output for formatting specifications.
#include<iostream>
using namespace std;

class Node{
    public:
    int val;
    Node* next;
    Node* prev;
    
    Node(int val){
        this->val = val;
        next = prev = NULL;
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
        temp=temp->next;
    }
    temp->next=n;
    n->prev = temp;
}

void disp(Node* head){
    Node* temp = head;
    while(temp!=NULL){
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
}

void rev(Node*& head) {
    Node* temp = head;
    Node* prev = NULL;
    
    while (temp != NULL) {
        Node* tempNext = temp->next;
        temp->next = prev;
        temp->prev = tempNext;
        prev = temp;
        temp = tempNext;
    }
    
    head = prev;
}

void beg(Node* &head){
    Node* toDel = head;
    head->next->prev = NULL;
    head = head->next;
    delete toDel;
}

void end(Node* &head){
    Node* temp = head;
    while(temp->next->next!=NULL){
        temp=temp->next;
    }
    Node* toDel = temp->next;
    temp->next = NULL;
    delete toDel;
}

int main(){
    Node* head = NULL;
    int a,b;
    cin >> a;
    while(a--){
        cin >> b;
        ins(head,b);
    }
    rev(head);
    disp(head);
    beg(head);
    disp(head);
    end(head);
    disp(head);
}
