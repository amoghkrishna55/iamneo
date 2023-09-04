// You are working on a robotics project that involves a robotic arm with multiple joint angles. Each joint angle is represented by an integer value. The joint angles are stored in an array, which was initially sorted in ascending order. However, due to a system
// malfunction, the array got rotated, causing the joint angles to become disordered.

// As part of the error recovery mechanism, you need to implement a function that finds the minimum joint angle in the sorted and rotated array using binary search.
// Write a function findMinimum() that takes in the sorted and rotated array of joint angles and the size of the array as inputs. The function should use binary search to find the minimum joint angle in the array. Assume that the joint angles are represented by integers
// and there are no duplicate values. The function should return the minimum joint angle found.

// Note: This is a sample question asked in Capgemini recruitment.
// Input format :
// The first line of input consists of the number of elements n.
// The second line of input consists of n elements that are sorted and rotated, separated by space.
// Output format:
// The output prints the minimum value in the array.

#include <iostream>

int findMinimum(int arr[], int n) {
    int left = 0;
    int right = n - 1;
    
    while (left < right) {
        int mid = left + (right - left) / 2;
        
        if (arr[mid] > arr[right]) {
            left = mid + 1;
        } else {
            right = mid;
        }
    }
    
    return arr[left];
}

int main() {
    int n;
    std::cin >> n;
    
    int arr[n];
    for (int i = 0; i < n; ++i) {
        std::cin >> arr[i];
    }
    
    int minimumAngle = findMinimum(arr, n);
    std::cout << minimumAngle << std::endl;
}