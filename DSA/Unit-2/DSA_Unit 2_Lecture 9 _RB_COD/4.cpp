// You are developing a smart device that reads binary data from sensors installed in various
// locations. Each sensor generates a stream of binary data, and the binary values are stored in a
// linked list. Your task is to implement a function that calculates the decimal value of the binary
// data represented by the linked list.
// The linked list represents the binary representation of a number, with the most significant bit at
// the head of the linked list. Your function should traverse the linked list and calculate the decimal
// value of the binary number.
// Note: This is a sample question asked in the Google interview.
// Input format :
// The input consists of a singly-linked list representing the binary data.
// Each node in the linked list contains a value of either 0 or 1.
// Output format :
// The output is the decimal value calculated from the binary data represented by the linked list.
// Code constraints :
// The number of nodes will not exceed 30.
// Each node's value is either 0 or 1.
// The binary data is guaranteed to be a valid representation of a non-negative integer.
// The most significant bit is located at the head of the linked list.

// You are using GCC
#include<iostream>
#include<cmath>
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

void ins(Node* &head,int val){
    Node* n = new Node(val);
    
    if(head==NULL){
        head=n;
        return;
    }
    
    Node* temp = head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next = n;
}

void dec(Node* head, int &count){
    int su = 0;
    Node* temp = head;
    while(count-1>=0){
        su += temp->val*pow(2,count-1);
        temp = temp->next;
        count--;
    }
    cout << "Decimal Value: " << su;
}

void disp(Node* head){
    Node* temp = head;
    cout << "Linked List: ";
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
    int a,b,count;
    cin >> a;
    count = a;
    while(a>0){
        cin >> b;
        ins(head,b);
        a--;
    }
    disp(head);
    dec(head,count);
}