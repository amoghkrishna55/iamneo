// In a university, two student clubs, "Tech Innovators" and "Creative Designers," have
// decided to collaborate and work on joint projects. As part of the collaboration, they
// need to merge their member lists to create a unified team. You have been tasked
// with writing a function that merges two Grounded Header Linked Lists representing
// the club members, alternating their elements to create a new list.
// The student club collaboration program allows the clubs to efficiently manage their
// member records and facilitate seamless teamwork. Each club maintains its own
// linked list, where each node represents a club member. The header node serves as
// the initial node of the list and contains no actual member data. The subsequent
// nodes hold the member records, with information such as student ID.
// To create a unified team, your function should merge the two linked lists, alternating
// their elements. The merged list should include members from both clubs, with the
// member records from each club appearing alternatively.
// Note: This is a sample question asked in TCS recruitment.
// Input format :
// The first line of input consists of the number of elements n in the first list.
// The second line of input consists of n elements, separated by space.
// The third line of input consists of the number of elements m in the second list.
// The fourth line of input consists of m elements, separated by space.
// Output format :
// The first line of output prints the list 1 elements.
// The second line of output prints the list 2 elements.
// The third line of output prints the merged list, where the elements from both lists are
// printed alternatively.
// Refer to the sample output for formatting specifications.

// You are using GCC
#include <iostream>
using namespace std;

class Node {
    public:
    int val;
    Node* next;
    
    Node(int val) {
        this->val = val;
        next = NULL;
    }
};

int main() {
    Node* head1 = NULL;
    Node* head2 = NULL;
    int a, b, c, d;
    cin >> a;
    while (a > 0) {
        cin >> b;
        Node* n = new Node(b);
        if (head1 == NULL) {
            head1 = n;
        } else {
            Node* temp = head1;
            while (temp->next != NULL) {
                temp = temp->next;
            }
            temp->next = n;
        }
        a--;
    }
    cin >> c;
    while (c > 0) {
        cin >> d;
        Node* n = new Node(d);
        if (head2 == NULL) {
            head2 = n;
        } else {
            Node* temp = head2;
            while (temp->next != NULL) {
                temp = temp->next;
            }
            temp->next = n;
        }
        c--;
    }
    
    Node* temp1 = head1;
    Node* temp2 = head2;
    cout << "List 1: ";
    while (temp1 != NULL) {
        cout << temp1->val << " ";
        temp1 = temp1->next;
    }
    cout << endl;
    cout << "List 2: ";
    while (temp2 != NULL) {
        cout << temp2->val << " ";
        temp2 = temp2->next;
    }
    cout << endl;
    
    Node* temp3 = head1;
    Node* temp4 = head2;
    cout << "Merged List: ";
    while (temp3 != NULL && temp4 != NULL) {
        cout << temp3->val << " " << temp4->val << " ";
        temp3 = temp3->next;
        temp4 = temp4->next;
    }
    while (temp3 != NULL) {
        cout << temp3->val << " ";
        temp3 = temp3->next;
    }
    while (temp4 != NULL) {
        cout << temp4->val << " ";
        temp4 = temp4->next;
    }
    cout << endl;
}

