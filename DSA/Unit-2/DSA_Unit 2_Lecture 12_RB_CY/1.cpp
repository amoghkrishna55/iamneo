// In LinkedListia, a kingdom ruled by King LinkedList, a circular header linked list structure was established. It had a
// unique circular arrangement where the last node pointed back to the header node. In LinkedListia, a circular
// header linked list structure existed.
// Advisor Intersectionia was tasked with finding common elements between two linked lists, List 1 and List 2. They
// efficiently traversed the circular structure, ensuring no element was missed. The intersection operation
// succeeded, bringing joy to LinkedListia and inspiring future exploration of data structures.
// Design a circular header linked list and perform an intersection operation with two linked lists to find the
// common elements.
// Note: This is a sample question asked in Wipro recruitment.
// Input format:
// The first line of input consists of the number of test cases.
// The first line of each test case represents the number of elements in the linked list n.
// The next line of each test case represents the n elements in the linked list.
// Output format :
// The first line of output prints the listl elements.
// The second line of output prints the list2 elements.
// The third line of output prints the intersection elements of both lists.

#include <iostream>
#include <unordered_set>
#include <vector>
using namespace std;

class Node
{
    public:
    int data;
    Node *next;
    
    Node(int val)
    {
        data = val;
        next = NULL;
    }
};

class CircularLinkedList
{
    private:
    Node *head;
    
    public:
    CircularLinkedList()
    {
        head = NULL;
    }
    
    void insert(int val)
    {
        Node *newNode = new Node(val);
        
        if (!head)
        {
            head = newNode;
            newNode->next = head;
        }
        else
        {
            Node *temp = head;
            while (temp->next != head)
            {
                temp = temp->next;
            }
            temp->next = newNode;
            newNode->next = head;
        }
    }
    
    void display()
    {
        if (!head)
        {
            cout << "Empty List";
            return;
        }
        
        Node *temp = head;
        do
        {
            cout << temp->data << " ";
            temp = temp->next;
        } while (temp != head);
    }
    
    void intersection(CircularLinkedList &list2)
    {
        unordered_set<int> elements;
        Node *current1 = head;
        Node *current2 = list2.head;
        vector<int> intersectionElements;
        
        do
        {
            elements.insert(current1->data);
            current1 = current1->next;
        } while (current1 != head);
        
        do
        {
            if (elements.find(current2->data) != elements.end())
            {
                intersectionElements.push_back(current2->data);
            }
            current2 = current2->next;
        } while (current2 != list2.head);
        
        cout << "Intersection: ";
        for (int i = intersectionElements.size() - 1; i >= 0; i--)
        {
            cout << intersectionElements[i] << " ";
        }
        cout << endl;
    }
};

int main()
{
    int t;
    cin >> t;
    
    int n, m;
    cin >> n;
    
    CircularLinkedList list1, list2;
    
    for (int i = 0; i < n; i++)
    {
        int val;
        cin >> val;
        list1.insert(val);
    }
    cin >> m;
    for (int i = 0; i < m; i++)
    {
        int val;
        cin >> val;
        list2.insert(val);
    }
    
    cout << "List 1: ";
    list1.display();
    cout << endl;
    
    cout << "List 2: ";
    list2.display();
    cout << endl;
    
    list1.intersection(list2);
    cout << endl;
    
    return 0;
}
