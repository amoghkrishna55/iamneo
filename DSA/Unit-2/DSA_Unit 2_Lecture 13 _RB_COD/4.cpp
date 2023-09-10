// You are given a doubly linked list.
// You need to implement the following operations:
// 1. Insert an element at the end of the list.
// 2. Insert an element at a given position in the list.
// Note: This is a sample question asked in a TCS interview.
// Input format:
// The input begins with an integer n' denoting the number of elements to be inserted at the end of the list.
// This is followed by 'n' space-separated integers representing the elements to be inserted at the end of the list.
// Next, there are two integers 'data and 'position' representing the element to be inserted and the position at
// which it should be inserted in the list.
// Output format :
// The first line of output prints the linked list after inserting elements at the end.
// The second line of output prints the linked list after inserting an element at the given position.
// Refer to the sample output for formatting specifications.
// Code constraints:
// The position for inserting an element should be a positive integer.
// The elements of the linked list are integers.

#include <iostream>

using namespace std;

class Node
{
public:
    int data;
    Node *prev;
    Node *next;

    Node(int data) : data(data), prev(nullptr), next(nullptr) {}
};

class DoublyLinkedList
{
public:
    Node *head;
    Node *tail;

    DoublyLinkedList() : head(nullptr), tail(nullptr) {}

    void insertAtEnd(int data)
    {
        Node *new_node = new Node(data);
        if (!head)
        {
            head = new_node;
            tail = new_node;
        }
        else
        {
            new_node->prev = tail;
            tail->next = new_node;
            tail = new_node;
        }
    }

    void insertAtPosition(int data, int position)
    {
        Node *new_node = new Node(data);
        if (!head || position <= 1)
        {
            new_node->next = head;
            if (head)
            {
                head->prev = new_node;
            }
            head = new_node;
        }
        else
        {
            Node *current = head;
            int current_position = 1;
            while (current_position < position - 1 && current->next)
            {
                current = current->next;
                current_position++;
            }
            new_node->next = current->next;
            if (current->next)
            {
                current->next->prev = new_node;
            }
            current->next = new_node;
            new_node->prev = current;
        }
    }

    void printList()
    {
        Node *current = head;
        while (current)
        {
            cout << current->data << " ";
            current = current->next;
        }
        cout << endl;
    }
};

int main()
{
    int n;
    cin >> n;

    DoublyLinkedList list;

    for (int i = 0; i < n; i++)
    {
        int data;
        cin >> data;
        list.insertAtEnd(data);
    }
    cout << "List after inserting at the end: ";

    list.printList();

    int element, position;
    cin >> element >> position;
    cout << "List after inserting at position " << position << ": ";

    list.insertAtPosition(element, position);

    list.printList();
}
