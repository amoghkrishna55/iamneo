// Imagine you are working on a student management system for a school. As part of the system, you need to develop a feature that allows
// teachers to enter the names of students in a class and obtain a sorted list of student names. This will help them organize the students
// alphabetically for various administrative tasks.

// You decide to implement this feature using the Bubble Sort algorithm to sort the student names.
// Write a program that takes input for the number of students in the class and their names. The program should then sort the names in
// ascending order using Bubble Sort and display the sorted list. This will assist the teachers in maintaining an organized student roster for
// efficient record-keeping and management.
// Note: This is a sample question asked in TCS recruitment.
// Input format:
// The first line of input consists of the number of students n in the class.
// The second line of input consists of n students' names, separated by space.

// Output format :
// The output prints the students' names in sorted order, separated by space.

// You are using GCC
#include <iostream>
#include <string>

using namespace std;

void bubbleSort(string *arr, int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                string temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main()
{
    int n;
    cin >> n;

    string *arr = new string[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    bubbleSort(arr, n);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << " ";

    delete[] arr;
    return 0;
}
