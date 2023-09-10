// You are working on a program to manage the lineup of a sports team.
// As part of the lineup management functionality, you need to implement a program
// that rotates the positions of the team members by a given number of positions to
// the right. This will allow the coach to reorganize the lineup and make necessary
// adjustments based on player performance or strategic considerations.
// The lineup is represented as a grounded header linked list, where each node
// contains the player's jersey number. The first node serves as the header node and
// does not contain any actual player data. The subsequent nodes represent the
// players in the lineup.
// Note: This is a sample question asked in Capgemini recruitment.
// Input format :
// The first line of input consists of the number of elements n in the list.
// The second line of input consists of n elements, separated by space.
// The third line of input consists of the number of positions to rotate right.
// Output format :
// The first line of output prints the original list.
// The second line of output prints the rotated list.

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
        head = n;
        n->next = head;
    }
    Node* temp = head;
    while(temp->next!=head){
        temp=temp->next;
    }
    temp->next = n;
    n->next = head;
}

void disp(Node* head){
    Node* temp = head;
    cout << temp->val << " ";
    temp=temp->next;
    while(temp!=head){
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
}

void nodeShift(Node* &head, int shift){
    for(int i=1;i<=shift;i++){
        head = head->next;
    }
}

int main(){
    Node *head = NULL;
    int a,b,shift,val;
    cin >> a;
    val = a;
    while(a>0){
        cin >> b;
        ins(head,b);
        a--;
    }
    cin >> shift;
    cout << "Original List: ";
    disp(head);
    nodeShift(head,abs(val-shift));
    cout << "Rotated List: ";
    disp(head);
}