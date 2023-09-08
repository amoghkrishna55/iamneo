// Kamal wants to create a linked list and perform the following operations on it:
// • Insert a node at the beginning of the linked list.
// • Append a node at the end of the linked list.
// • Print the final linked list.
// Write a program that takes the number of nodes to be inserted, followed by their values, as input. After inserting the
// nodes, the program should ask for a new value and append a node with that value at the end of the linked list. Finaly,
// the program should print the contents of the linked list.
// Example
// Input:
// 5
// 123 45
// 6

// Output:
// Created Linked list: 5 4 3 2 1
// Final list: 5 4 3 2 1 6
// Explanation:
// The program first creates a linked list by inserting nodes at the beginning. The input specifies that there are 5 nodes, and
// their values are 1, 2, 3, 4, and 5. After inserting these nodes, the program asks for a new value, which is 6. It then appends
// a node with the value 6 at the end of the linked list. Finally, the program prints the contents of the linked list, which are 5,
// 4, 3, 2, 1, and 6 in that order.
// Note: This is a sample question asked in Capgemini recruitment.
// Input format :
// The first line consists of an integer, n, representing the number of nodes to be initially inserted into the linked list.
// The second line of input consists of n space-separated integers, representing the elements of the linked list.
// The third line of input consists of an integer, m, representing the value of the new node to be inserted at the end of the
// linked list.
// Output format :
// The first line of output prints the initial linked list elements, separated by space.
// The second line of output prints the final linked list elements, after inserting the new node, separated by space.

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

void insLef(Node* &head, int val){
    Node* n = new Node(val);
    if(head==NULL){
        head = n;
        return;
    }
    n->next = head;
    head = n;
}

void insRyt(Node* &head, int val){
    Node* n = new Node(val);
    
    if(head==NULL){
        head = n;
        return;
    }
    Node* temp = head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next = n;
}

void disp(Node* head){
    Node* temp = head;
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
        insLef(head,b);
        a--;
    }
    cin >> b;
    cout << "Created Linked list: ";
    disp(head);
    insRyt(head,b);
    cout << "Final list: ";
    disp(head);
}