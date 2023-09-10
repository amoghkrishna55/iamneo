// You are given a circular header linked list implementation. The program should allow the
// insertion of elements at the end of the list and the deletion of nodes at a given position. The
// program should display the contents of the circular linked list after each operation.
// Note: This is a sample question asked in a CTS interview.
// Input format :
// The first line contains an integer n representing the number of elements to be inserted into the
// circular linked list.
// The next line contains n space-separated integers representing the elements to be inserted.
// The last line contains an integer representing the position for deletion.
// Output format :
// The output should display the contents of the circular linked list after each operation.
// If the list is empty, the output should display "List is empty."
// If the position for deletion is invalid, the outout should display "Invalid position."
// Refer to the sample output for formatting specifications.
// Code constraints :
// The data values in the circular linked list are integers.
// The position for deletion should be a positive integer within the valid range of the list size.
// The program should handle an empty list appropriately.

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
        head = n;
        n->next = head;
    }
    Node* temp = head;
    while(temp->next!=head){
        temp=temp->next;
    }
    temp->next = n;
    n->next = head;
}

void disp(Node* head){
    if(head==NULL){
        cout << "List is empty.";
        return;
    }
    Node* temp = head;
    cout << "Contents of the CLL: " << endl;
    cout << "|" <<temp->val << "| --> ";
    temp=temp->next;
    while(temp!=head){
        cout << "|" <<temp->val << "| --> ";
        temp = temp->next;
    }
    cout << endl;
}

void del(Node* &head, int pos){
    if(pos==1){
       Node* temp = head;
       head=head->next;
       delete temp;
       return;
    }
    Node* temp = head;
    for(int i=1;i<pos-1;i++){
        temp = temp->next;
    }
    Node* toDel = temp->next;
    temp->next = temp->next->next;
    delete toDel;
}

int main(){
    Node *head = NULL;
    int a,b,pos,val;
    cin >> a;
    val = a;
    if(a==0){
        cout << "List is empty.";
        return 0;
    }
    while(a>0){
        cin >> b;
        ins(head,b);
        a--;
    }
    cin >> pos;
    disp(head);
    if(pos>val){
        cout << "Invalid position.";
        return 0;
    }
    del(head, pos);
    cout << "After deleting at position " << pos <<":" << endl;
    disp(head);
}
