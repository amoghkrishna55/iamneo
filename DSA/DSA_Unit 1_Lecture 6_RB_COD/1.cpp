// You are developing a sales analytics system for a retail company. As part of the system, you need to implement a feature that sorts the sales data in descending order based on the revenue generated by each product.
// Write a program that prompts the user to enter the number of products and their respective revenue figures. The program should then use the insertion sort algorithm to sort the revenue figures in descending order and print with its iteration. After sorting, the
// program should display the products along with their corresponding sorted revenue figures
// This feature will help the retail company identify its top-performing products and prioritize their sales efforts accordingly. It provides a clear view of the revenue generated by each product, aiding in strategic decision-making and optimizing sales performance
// within the company.

// Note: This is a sample question asked in Capgemini recruitment.
// Input format :
// The first line of input consists of N, representing the size of the array.
// The second line of input consists of the N array elements, separated by space.
// Output format :
// The first line of output prints the initial array of elements, separated by space.
// The following lines print the result of each iteration.
// The last line of output prints the final sorted array in decreasing order.

// Refer to the sample output for formatting specifications.
// Code constraints:
// N > 0

#include <iostream>
#include <vector>
using namespace std;

void printArray(vector<int>& arr) {
    for (int i = 0; i < arr.size(); i++)
    cout << arr[i] << " ";
    cout << endl;
}

void insertionSort(vector<int>& arr) {
    for (int i = 1; i < arr.size(); i++) {
        int j = i;
        while (j > 0 && arr[j - 1] < arr[j]) {
            swap(arr[j], arr[j - 1]);
            j--;
        }
        cout << "After Iteration " << i << ": ";
        printArray(arr);
    }
}

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    cin >> arr[i];
    
    cout << "Initial order: ";
    printArray(arr);
    insertionSort(arr);
    
    cout << "Sorted order: ";
    printArray(arr);
    
    return 0;
}
