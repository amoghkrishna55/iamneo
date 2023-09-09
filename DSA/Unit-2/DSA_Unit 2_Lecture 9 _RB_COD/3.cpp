// Imagine you are working on a text editor application that allows users to create documents. As
// part of a new feature, you want to implement a function that checks whether a word entered by
// the user is a palindrome or not.
// To achieve this, you decide to utilize a singly linked list to store the characters of the word. Each
// character will be represented as a node in the linked list.
// Your task is to write a program that takes input from the user, constructs the linked list, and
// determines whether the word is a palindrome.
// Note: This question is asked by Amazon, Microsoft, and Snapdeal.
// Input format :
// The input consists of a series of space-separated characters (alphabets, digits, special symbols).
// Enter $ to stop.
// Output format :
// The output prints whether the given characters form a palindrome or not.

// You are using GCC
#include<iostream>
using namespace std;

class Node{
    public:
    char val;
    Node* next;
    
    Node(char val){
        this->val=val;
        next = NULL;
    }
};

void ins(Node* &head,char val){
    Node* n = new Node(val);
    
    if(head==NULL){
        head=n;
        return;
    }
    
    Node* temp=head;
    
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next = n;
}

void pal(Node* head,int count){
    int start = 0;
    int end = count-1;
    bool stat = true;
    while(end>=start){
        Node* temp1 = head;
        Node* temp2 = head;
        for(int i=0;i<start;i++){
            temp1 = temp1->next;
        }
        for(int i=0;i<end;i++){
            temp2 = temp2->next;
        }
        if(temp1->val!=temp2->val){
            stat = false;
            break;
        }
        end--;
        start++;
    }
    if(stat){
        cout << "The linked list is a palindrome";
    }
    else{
        cout << "The linked list is not a palindrome";
    }
}

int main(){
    Node *head = NULL;
    char a;
    int count=0;
    while(1){
        cin >> a;
        if(a!='$'){
            ins(head,a);
            count++;
        }
        else{
            break;
        }
    }
    pal(head,count);
}