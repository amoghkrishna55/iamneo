// Sita wants to remove duplicate nodes from a sorted, singly linked list. Implement a program that
// takes a sorted linked list as input and removes any duplicate nodes, resulting in a modified
// linked list.
// Note: This is a sample question asked in an Accenture interview.
// Input format :
// The first line of input contains an integer representing the number of nodes in the linked list.
// The second line contains a series of space-separated integers, representing the values of the
// nodes in the sorted linked list.
// Output format :
// The output displays the modified linked list after removing duplicate nodes.
// Refer to the sample output for formatting specifications.
// Code constraints :
// The linked list should be sorted in ascending order.
// 1 <= number of nodes < = 100
// -50000 <= values of nodes < = 50000

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

void dup(Node* &head){
    if (head == NULL) {
        return;
    }
    
    Node* current = head;
    while (current != NULL) {
        int valf = current->val;
        Node* temp = current;
        
        while (temp->next != NULL) {
            if (temp->next->val == valf) {
                Node* del = temp->next;
                temp->next = temp->next->next;
                delete del;
            } else {
                temp = temp->next;
            }
        }
        
        current = current->next;
    }
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
    cout << "Original Linked List: ";
    disp(head);
    dup(head);
    cout << "Linked List after removing duplicates: ";
    disp(head);
}