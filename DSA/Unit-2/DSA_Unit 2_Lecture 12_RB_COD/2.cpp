// You are assigned the task of implementing a program that operates on a circular header linked
// list, a unique type of linked list in which the last node points back to the header node, forming a
// circular structure.
// Your objective is to create a program that inserts elements at the end of the circular linked list
// and displays its contents.
// Note: This is a sample question asked in TCS recruitment.
// Input format :
// The first line of input consists of an integer n, representing the size of the list.
// The second line consists of n space-separated integers, representing the elements to be inserted
// at the end of the list.
// Output format :
// The output prints the elements of the circular header linked list, separated by space.
// If no elements are inserted, print "Linked List is empty".

// You are using GCC
#include<iostream>
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
        n->next = head;
        return;
    }
    
    Node* temp = head;
    while(temp->next!=head){
        temp = temp->next;
    }
    temp->next = n;
    n->next = head;
}

void disp(Node* head){
    if(head==NULL){
        cout << "Linked List is empty.";
        return;
    }
    Node*temp = head->next;
    cout << head->val << " ";
    while(temp!=head){
        cout << temp->val << " ";
        temp = temp->next;
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