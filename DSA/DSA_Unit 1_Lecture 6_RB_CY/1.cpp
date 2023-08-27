// You are developing a sports analytics system for a basketball team. As part of the system, you need to implement a feature that finds the second largest player's height from a given array of player heights.
// Write a program that takes user input for the number of players and their respective heights. The program should use the selection sort algorithm to sort the player heights in non-decreasing order.
// After sorting, it should display the sorted array of player heights. Additionally, the program should find and display the second largest player's height from the sorted list.
// This feature will help coaches and scouts identify the second-tallest player on the team, which is crucial for team strategy, player selection, and matchup planning. The program provides an efficient way to sort and find the second-largest player's height within the
// basketball analytics system, enhancing decision-making and team management.
// Note: This is a sample question asked in CTS recruitment.
// Input format:
// The first line of input consists of the number of elements n in the array.
// The second line of input consists of n array elements, separated by space.
// Output format :
// The first line of output prints the sorted order.
// The second line of output prints the 2nd largest element in the given array.

// You are using GCC
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) cin >> a[i];
    
    for (int i = 0; i < n - 1; i++) {
        int min_idx = i;
        for (int j = i + 1; j < n; j++)
        if (a[j] < a[min_idx])
        min_idx = j;
        swap(a[min_idx], a[i]);
    }
    cout << "Sorted array: ";
    for (int i = n-1; i>=0; i--) cout << a[i] << " ";
    cout << endl;
    
    cout << "The second largest element is " << a[n - 2] << endl;
    
    return 0;
}
