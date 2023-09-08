// Kathir wants to create a program that allows him to build a linked list by inserting nodes at the beginning. He wants to
// be able to input the data for each node and specify when to stop inserting nodes (defined as 0). After inserting the
// nodes, he wants to display the contents of the linked list. Help Kathir by providing the required input and output formats
// for the code.
// Note: This is a sample question asked in a Wipro interview.
// Input format :
// The first input consists of an integer, which is the element inserted in the node (n).
// The second input consists of the following: if choice 0 is entered, continue to insert the element in the node; otherwise,
// end the node inserted.
// Output format :
// For each node inserted at the beginning, the output displays the message "Node inserted" on a new line.
// After inserting all the nodes, the output displays the contents of the linked list in a space-separated format on a new line,
// preceded by the text "Linked List."
// Finally, the output displays the message "Node ended" on a new line.
// Refer to the sample output for the formatting specifications.
// Code constraints:
// Choice = 0
// 1<=n<=100000

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
        cin >> a >> b;
        insLef(head,a);
        cout << "Node inserted" << endl;
        if(b!=0){
            disp(head);
            cout << "Node ended";
            break;
        }
    }
}