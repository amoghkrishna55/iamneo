// You need to write a program to maintain a student roster using a singly linked list.
// Each student is represented by a node in the linked list, which contains the student's name. Implement an insertNode)
// function, which inserts a new student node with the given name at the specified position in the roster. The position is 1-
// based, meaning the first student is at position 1.
// If the specified position is 1, the new student node should become the new head of the roster. If the specified position is
// greater than the current size of the roster, the new student node should be appended at the end.
// After performing the insertion, you should print the contents of the roster.
// Note: This is a sample question asked in an Amazon interview.
// Input format :
// The first line of input consists of an integer n, representing the number of students currently in the roster.
// The next n lines of input consist of the names of the students on the roster, separated by a line.
// The last line of input consists of a string name, representing the name of the new student to be inserted, and an integer,
// representing the position at which the new student should be inserted, separated by space.
// Output format :
// The first line of output should print the current linked list elements, separated by space.
// The next line of output should print the updated linked list elements after the insertion at the given position, separated by
// space.

// Refer to the sample output for formatting specifications.
// Code constraints :
// The student names consist of at most 100 characters.
// The number of students on the roster should not exceed 100.

// You are using GCC
#include <iostream>
#include <string>
using namespace std;

class Node
{
    public:
    string data;
    Node *next;
    
    Node(string val)
    {
        data = val;
        next = NULL;
    }
};
void insertNode(Node *&head, string val)
{
    Node *n = new Node(val);
    
    if (head == NULL)
    {
        head = n;
        return;
    }
    
    Node *temp = head;
    
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = n;
}

void insertPos(Node *&head, string val, int num)
{
    Node *n = new Node(val);
    
    int count = 1;
    if (head == NULL)
    {
        head = n;
        return;
    }
    
    if (num==1){
        n->next = head;
        head=n;
        return;
    }
    
    Node *temp = head;
    while (count < num-1)
    {
        temp = temp->next;
        count++;
    }
    n->next = temp->next;
    temp->next = n;
}

void display(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main()
{
    Node *head = NULL;
    int a, pos;
    string le;
    cin >> a;
    while (a > 0)
    {
        string lin;
        cin >> lin;
        insertNode(head, lin);
        a--;
    }
    cin >> le >> pos;
    
    cout << "Current Linked List:" << endl;
    display(head);
    insertPos(head, le, pos);
    cout << "Updated Linked List:" << endl;
    display(head);
}
