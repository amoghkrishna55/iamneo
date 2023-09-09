// Madhe wants to remove all nodes with values greater than a specified value 'x' from a singly
// linked list. He needs your help to write a program that takes the size of the linked list, the
// elements of the linked list, and the value 'x' as input.
// Additionally, he wants to insert new nodes at the end of the linked list. The program should then
// delete all nodes with values greater than '× from the linked list and display the modified linked
// list.
// Write a program to solve Madhev's problem.
// Note: This is a sample question asked in a Cocubes interview.
// Input format :
// The first line of input consists of the size of the linked list n (an integer).
// The second line of input consists of the elements of the linked list arr (a sequence of space-
// separated integers).
// The last line of input consists of the value × (an integer) to compare against the nodes.
// Output format :
// The output displays the original linked list.
// The modified linked list after removing nodes with values greater than 'X.
// Refer to the sample output for format specifications.

#include<iostream>
using namespace std;

class Node {
    public:
    int val;
    Node* next;
    
    Node(int val) {
        this->val = val;
        this->next = NULL;
    }
};

void ins(Node* &head, int val) {
    Node* n = new Node(val);
    
    if (head == NULL) {
        head = n;
        return;
    }
    Node* temp = head;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = n;
}

void disp(Node* head) {
    Node* temp = head;
    if (temp == NULL) {
        cout << "Empty linked list" << endl;
        return;
    }
    while (temp != NULL) {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
}

void lag(Node* &head, int num) {
    Node* temp = head;
    Node* prev = NULL; 
    
    while (temp != NULL) {
        if (temp->val > num) {
            if (prev == NULL) {
             
                Node* toDel = head;
                head = head->next;
                delete toDel;
                temp = head; 
            } else if (temp->next == NULL) {
                
                prev->next = NULL;
                delete temp;
                temp = NULL; 
            } else {
               
                Node* toDel = temp;
                prev->next = temp->next;
                temp = temp->next; 
                delete toDel;
            }
        } else {
            prev = temp;
            temp = temp->next;
        }
    }
}

int main() {
    Node* head = NULL;
    int a, b;
    cin >> a;
    while (a > 0) {
        cin >> b;
        ins(head, b);
        a--;
    }
    cin >> b;
    cout << "Original Linked List: ";
    disp(head);
    lag(head, b);
    cout << "Modified Linked List: ";
    disp(head);
    while (head != NULL) {
        Node* toDel = head;
        head = head->next;
        delete toDel;
    }
    
    return 0;
}

