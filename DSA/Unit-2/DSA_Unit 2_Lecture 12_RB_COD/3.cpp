// You are given the task of developing a program that operates on a circular header linked list, a
// variant of the standard linked list. In this circular header linked list, the last node points back to
// the header node, forming a circular structure.
// Your goal is to implement a program that inserts elements at the end of the circular linked list
// and prints the data values of alternate nodes.
// Note: This is a sample question asked in TCS recruitment.
// Input format :
// The first line of input consists of an integer n, representing the size of the list.
// The second line consists of n space-separated integers, representing the elements to be inserted
// at the end of the list.
// Output format :
// The output prints the alternate nodes of the circular header linked list.
// If no elements are inserted, print "Linked List is empty".
// Refer to the sample output for formatting specifications.
// Code constraints :
// n should be odd

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
        cout << "Linked List is empty." << endl;
        return;
    }
    cout << "Alternate Nodes: ";
    while(temp!=NULL){
        cout << temp->val << " ";
        if(temp->next!=NULL){
            temp=temp->next->next;
        }
        else{
            break;
        }
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
