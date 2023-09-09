// Imagine you are a teacher preparing seating arrangements for a classroom. You have a list of students' names,
// represented by a singly linked list. The linked list is arranged in a specific order, but you want to pair up the students in a
// different way for a group activity.
// To achieve this, you need to write a function that swaps elements pairwise in the linked list. Each pair of students will sit
// together during the activity, fostering collaboration and teamwork. By rearranging the linked list, you can create new
// pairs of students without changing their individual positions in the list.
// For example, if the linked list is 1->2->3->4->5 then the program should change it to 2->1->4->3->5.
// Note: This question is asked by Amazon, Microsoft, and Moonfrog Labs.
// Input format :
// The first line of input consists of the size n.
// The second line of input consists of n elements, separated by space.
// Output format :
// The first line of output prints the linked list before swapping pairwise.
// The second line of output prints the linked list after swapping pairwise.

// You are using GCC
#include<iostream>
using namespace std;

class Node{
    public:
    int val;
    Node *next;
    
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
        temp=temp->next;
    }
    temp->next = n;
}

void swp(Node* &head) {
    Node* temp = head;
    while (temp != NULL && temp->next != NULL) {
        int tval = temp->val;
        temp->val = temp->next->val;
        temp->next->val = tval;
        temp = temp->next->next;
    }
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
        ins(head,b);
        a--;
    }
    cout << "Linked list before swapping pairwise: ";
    disp(head);
    swp(head);
    cout << "Linked list after swapping pairwise: ";
    disp(head);
}