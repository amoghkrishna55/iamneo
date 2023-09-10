// You are tasked with implementing a system that manages a student database. The database stores student
// information using a doubly linked list. However, the system requires the ability to split the student database into
// two equal halves for better management. Your task is to write a program that splits the given doubly linked list
// of student names into two halves, ensuring that the student information is evenly distributed between the
// resulting lists. The split should be done in such a way that each resulting list maintains the original order of the
// student records.
// Write a program that takes input in the specified format and splits the doubly linked list of student names into
// two halves using the "insertAtEnd" function.
// Note: This is a sample question asked in Microsoft recruitment.
// Input format :
// The input begins with a single integer, N, representing the number of students in the database.
// The following N lines contain the names of the students, one name per line.
// Output format :
// The program should output the following:
// The first half of the student names after splitting.
// The second half of the student names after splitting.
// Each list should be displayed as a space-separated string of student names.
// If either the first half or the second half is empty, it should be displayed as an empty string.
// Code constraints:
// The maximum number of students in the database is 100.
// Each student's name is a string of alphanumeric characters and can have a maximum length of 100 characters.
// The input list of student names cannot be empty.

#include <iostream>
#include <string>

using namespace std;

class Node {
    public:
    string data;
    Node* prev;
    Node* next;
    
    Node(string data) : data(data), prev(nullptr), next(nullptr) {}
};

class DoublyLinkedList {
    public:
    Node* head;
    Node* tail;
    
    DoublyLinkedList() : head(nullptr), tail(nullptr) {}
    
    void insertAtEnd(string data) {
        Node* new_node = new Node(data);
        if (!head) {
            head = new_node;
            tail = new_node;
        } else {
            new_node->prev = tail;
            tail->next = new_node;
            tail = new_node;
        }
    }
    
    pair<DoublyLinkedList, DoublyLinkedList> splitLinkedList() {
        DoublyLinkedList first_half;
        DoublyLinkedList second_half;
        
        if (!head) {
            return make_pair(first_half, second_half);
        }
        
        int count = 0;
        Node* current = head;
        while (current) {
            count++;
            current = current->next;
        }

        int middle = count / 2;
        

        current = head;
        for (int i = 0; i < middle; i++) {
            current = current->next;
        }

        second_half.head = current->next;
        second_half.tail = tail;
        

        current->next = nullptr;
        second_half.head->prev = nullptr;
        
        return make_pair(*this, second_half);
    }
};

int main() {
    int N;
    cin >> N;
    cin.ignore(); 
    
    DoublyLinkedList student_list;
    
    for (int i = 0; i < N; i++) {
        string student_name;
        getline(cin, student_name);
        student_list.insertAtEnd(student_name);
    }
    
    pair<DoublyLinkedList, DoublyLinkedList> result = student_list.splitLinkedList();
    
    if (result.first.head) {
        Node* current = result.first.head;
        while (current) {
            cout << current->data << " ";
            current = current->next;
        }
    } else {
        cout << "";
    }
    cout << endl;
    
    if (result.second.head) {
        Node* current = result.second.head;
        while (current) {
            cout << current->data << " ";
            current = current->next;
        }
    } else {
        cout << "";
    }
    cout << endl;
}

