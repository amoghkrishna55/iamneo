// You are developing a software tool for analyzing temperature data collected from various weather stations. The
// tool requires a feature to reverse the order of temperature values in a linked list representing a sequence of
// recorded temperatures. Implement a program that allows the user to input a list of temperatures and create a
// doubly linked list using the temperature values. The program should then reverse the order of temperatures in
// the list and display the reversed list as the output.
// The program will prompt the user to enter the number of temperature values, followed by the temperature
// values themselves. It will create a doubly linked list using the entered temperature values, with each
// temperature value stored in a node. Next, the program will reverse the order of the temperature values in the
// list using the reverseList function. Finally, it will print the reversed list of temperature values.
// This software tool will assist meteorologists and weather analysts in examining temperature trends by
// providing them with a reversed sequence of recorded temperatures, enabling them to gain insights into
// temperature fluctuations over time.
// Note: This is a sample question asked in a Capgemini interview.
// Input format :
// The first line contains an integer 'n' representing the number of temperature values.
// The next line contains 'n' space-separated integers representing the temperature values.
// Output format :
// The first line of output consists of the original list of temperature values.
// The next line of output consists of a reversed list of temperature values.

// Refer to the sample output for formatting specifications.
// Code constraints
// The temperature values are integers.
// The temperature values can be both positive and negative.
// The size of the linked list is determined by the user input.

// You are using GCC
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

int main(){
    Node* head = NULL;
    int a,b;
    cin >> a;
    while(a--){
        cin >> b;
        ins(head,b);
    }
    cout << "Original List: ";
    rev(head);
    disp(head);
    cout << "Reversed List: ";
    rev(head);
    disp(head);
    
}