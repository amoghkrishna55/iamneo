// You have been assigned to develop a program for a ticketing system at a concert venue. The system needs to
// maintain a circular header- linked list to manage the available seats in the venue. Each seat is represented by
// a node in the list, containing the seat number (an integer) and a link to the next seat.
// The program should provide the following functionality:
// 1. Insertion of a new seat at the front of the list, representing a newly available seat.
// 2. Insertion of a new seat at a specified position in the list, representing a reserved seat.
// 3. Insertion of a new seat at the middle position (take the floor value of the list when additional seats
// become available due to a change in the seating arrangement.
// 4. Displaying the total number of available seats in the venue and printing the seat numbers in a circular
// manner, starting from the head seat.
// Note: This is a sample question asked in a Capgemini interview.
// Input format:
// The first line contains an integer n representing the number of seats to be inserted at the front of the list.
// The next line contains n seat numbers to be inserted at the front of the list.
// The next line contains an integer representing the seat number to be inserted at the middle position.
// The next line contains an integer position representing the position at which a seat needs to be inserted.
// The next line contains an integer representing the seat number to be inserted at the specified position.
// Output format:
// If the list is empty or an invalid position is given, the program outputs "Invalid position."
// The program outputs "After inserting at middle:" followed by the number and list of seat numbers in a circular
// manner. Take the floor value while inserting it in the middle.
// After inserting a seat at a specified position, the program outputs "After inserting at position:" followed by the
// number and list of seat numbers in a circular manner.

// Refer to the sample output formatting specifications.

#include<iostream>
using namespace std;

class Node {
    public:
    int val;
    Node* next;
    Node* prev;
    
    Node(int val) {
        this->val = val;
        next = prev = NULL;
    }
};

void ins(Node*& head, int val) {
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
    n->prev = temp;
}

void disp(Node* head) {
    Node* temp = head;
    while (temp != NULL) {
        cout << "|" << temp->val << "| --> ";
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

void posins(Node*& head, int val, int pos) {
    Node* n = new Node(val);
    
    if (pos == 1) {
        n->next = head;
        if (head != NULL) {
            head->prev = n;
        }
        head = n;
        return;
    }
    
    Node* temp = head;
    for (int i = 1; i < pos - 1; i++) {
        if (temp == NULL) {
            cout << "Invalid position." << endl;
            return;
        }
        temp = temp->next;
    }
    
    if (temp == NULL) {
        cout << "Invalid position." << endl;
        return;
    }
    
    n->next = temp->next;
    n->prev = temp;
    if (temp->next != NULL) {
        temp->next->prev = n;
    }
    temp->next = n;
}

int main() {
    Node* head = NULL;
    int a, b, pos1;
    cin >> a;
    int val = a;
    
    if (a <= 0) {
        cout << "List is empty.";
        return 0;
    }
    
    while (a > 0) {
        cin >> b;
        ins(head, b);
        a--;
    }
    
    rev(head);
    
    int val1 = (val % 2 == 0) ? val / 2 : (val + 1) / 2;
    
    int old, pos, new1;
    cin >> old;
    cin >> pos >> new1;
    
    cout << "After inserting at middle: " << endl;
    posins(head, old, val1);
    cout << "No of nodes in the CLL is " << val + 1 << endl;
    disp(head);
    if(pos>val){
        cout << "Invalid position.";
        return 0;
    }
    cout << "After inserting at position " << pos << ":" << endl;
    posins(head, new1, pos);
    cout << "No of nodes in the CLL is " << val + 2 << endl;
    disp(head);
    
    return 0;
}