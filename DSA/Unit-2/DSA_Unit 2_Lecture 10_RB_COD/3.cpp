// You are given an integer n representing the number of nodes in a singly linked list.
// Each node contains a string value.
// Your task is to implement a program that creates a singly linked list with the given
// number of nodes and string values and then deletes the last node from the list.
// Finally, you need to print the contents of the modified linked list.
// Note: This is a sample question asked in a HCL interview.
// Input format
// The first line of input consists of an integer n, representing the number of nodes in the
// singly linked list.
// The next n lines of input consist of n strings, where each line represents the string
// value of a node in the linked list.
// Output format :
// The output should print the elements of the singly linked list after deleting the last
// node. The elements should be separated by space.
// Code constraints:
// 1 ‹ n< 100
// Each string value in the nodes will contain only alphabetical characters.

// You are using GCC
#include <iostream>
#include <string>
using namespace std;

class Node{
    public:
    string val;
    Node* next;
    
    Node(string val){
        this->val = val;
        next = NULL;
    }
};

void ins(Node* &head, string val){
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

void disp(Node* head){
    Node* temp = head;
    while(temp!=NULL){
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
}

void del(Node* &head){
    Node* temp = head;
    while(temp->next->next!=NULL){
        temp = temp->next;
    }
    Node* toDel = temp->next;
    temp->next = NULL;
    delete toDel;
}

int main(){
    Node* head = NULL;
    int a;
    string line;
    cin >> a;
    while(a>0){
        cin >> line;
        ins(head,line);
        a--;
    }
    del(head);
    disp(head);
}