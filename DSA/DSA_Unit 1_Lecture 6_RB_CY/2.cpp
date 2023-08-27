// It's the first day for the students at school and the students enter the class and get seated at random places without any height order. So the students who are short and sitting back are not able to see the board since they sit behind taller students. Understanding
// this difficulty, the teacher decides to make the students sit in height order.
// Suppose there are n students in the class. She makes all the students stand in a line and compares the first student's height with the remaining (n-I) students. If the first student's height is greater than the ith student, then the taller person goes to the ith place and
// the ith student comes to the first place.
// Again the new first student's height is compared with the remaining students and if his height is greater than ith student the first student goes to ith place and ith place student comes to first place and this goes on till the end. This process continues for all the
// students.

// Finally, the students are in height order.

// Write a program to perform selection sort on an array of n elements.
// Example

// Input:
// 6
// 480
// 160
// 250
// 130
// 80
// 50

// You are using GCC
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) cin >> a[i];
    
    cout << "Student's height order before sorting: ";
    for (int i = 0; i < n; i++) cout << a[i] << " ";
    cout << endl;
    
    for (int i = 0; i < n - 1; i++) {
        int min_idx = i;
        for (int j = i + 1; j < n; j++)
        if (a[j] < a[min_idx])
        min_idx = j;
        swap(a[min_idx], a[i]);
        
        cout << "Height order of students after iteration " << i + 1 << ": ";
        for (int k = 0; k < n; k++) cout << a[k] << " ";
        cout << endl;
    }
    
    cout << "After final comparison of all students, the height order becomes: ";
    for (int i = 0; i < n; i++) cout << a[i] << " ";
    cout << endl;
    
    return 0;
}
