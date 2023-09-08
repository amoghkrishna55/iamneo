// Vijay wants to create a program that allows him to manipulate a linked list.
// He wants to be able to perform the following operations:
// 1: Append Left: Append a node at the beginning (left of the linked list.
// 2: Append Right: Append a node at the end (right) of the linked list.
// 3: Print: Print the contents of the linked list.
// 4: Exit: Exit the program.
// Note: This is a sample question asked in Accenture recruitment.
// Input format :
// For inserting a node at the beginning of the linked list, input: 1 followed by the value
// For inserting at the end of the linked list, input: 2 followed by the value
// To display the current linked list, input: 3
// To exit the program, input: 4
// Output format :
// The program displays the following outputs based on the inputs provided:
// If the choice is 3: "Linked List: [values separated by space]"
// If the choice is 4: The program exits.
// If the choice is invalid: "Invalid choice"
// Code constraints :
// The input values for the linked list nodes will be non-negative integers.

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
    cout << "Linked List: ";
    while(temp!=NULL){
        cout << temp->val << " ";
        temp=temp->next;
    }
    cout << endl;
}
int main(){
    Node* head = NULL;
    while(1){
        int a,b;
        cin >> a;
        if(a==1){
            cin >> b;
            insLef(head,b);
        }
        else if(a==2){
            cin >> b;
            insRyt(head,b);
        }
        else if(a==3){
            disp(head);
        }
        else if(a==4){
            break;
        }
        else{
            cout << "Invalid choice";
            break;
        }
    }
}