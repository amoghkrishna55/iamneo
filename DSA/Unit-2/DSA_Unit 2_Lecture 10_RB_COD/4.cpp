// Nandha wants to write a program that deletes a range of nodes between two given positions in a singly linked list. Write a program that takes input for the size of
// the linked list, the elements of the linked list, the start position, and the end position. The program should delete the nodes between the specified positions and
// display the updated linked list.
// Note: This is a sample question asked in a TCS interview.
// Input format :
// The first line contains an integer 'size representing the size of the linked list.
// The second line contains 'arr' space-separated integers representing the elements of the linked list.
// The third line contains an integer 'start representing the start position.
// The fourth line contains an integer 'end' representing the end position.
// Output format :
// The first line of output displays the linked list before deletion.
// The second line of output displays the linked list after deletion.

#include <iostream>
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
    if(head==NULL){
        cout << "all the elements are deleted";
        return;
    }
    while(temp!=NULL){
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
}

void rangeDel(Node* &head, int start, int end){
    int count=1;
    if(start==1){
        Node* temp = head;
        while(count<=end){
            head = head->next;
            count++;
        }
        while(temp->next!=NULL){
            Node* toDel = temp;
            temp = temp->next;
            delete toDel;
        }
    }
    else{
        Node* temp1 = head;
        while(count<start-1 && temp1!=NULL){
            temp1=temp1->next;
            count++;
        }
        count = 1;
        Node* temp2 = head;
        while(count<=end && temp2!=NULL){
            temp2=temp2->next;
            count++;
        }
        Node* temp = temp1->next;
        temp1->next = temp2;
        while(temp->next!=NULL && temp!=temp2){
            Node* toDel = temp;
            temp = temp->next;
            delete toDel;
        }
    }
}

int main(){
    Node* head = NULL;
    int a,start,end;
    int line;
    cin >> a;
    while(a>0){
        cin >> line;
        ins(head,line);
        a--;
    }
    cin >> start;
    cin >> end;
    cout << "Linked List before deletion: ";
    disp(head);
    rangeDel(head,start,end);
    cout << "Linked List after deletion: ";
    disp(head);
}
