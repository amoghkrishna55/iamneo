// You are developing a search feature for an e-commerce platform that sells various products. The platform maintains a sorted list of product prices in ascending order to facilitate efficient searching. Some products have the same price, resulting in duplicate entries
// in the sorted price array.

// As a part of the search feature, you need to implement a function that finds the first and last occurrence of a given target price in the sorted array using binary search. This will allow users to see the range of products available at a specific price.

// Write a function that takes in the sorted array of product prices, the size of the array, and the target price as inputs. The function should use binary search to find the index of the first and last occurrence of the target price in the array.
// Note: This is a sample question asked in Infoss recruitment.
// Input format :
// The first line of input consists of the number of elements in the array.
// The second line of input consists of array elements, separated by space.
// The third line of input consists of the target value.
// Output format :
// If the target value is found, print the index of the first and last occurrence.
// If the target value is not foud, print "Target value is not found in the array."

// You are using GCC
#include <iostream>

int findFirstOccurrence(int arr[], int size, int target) {
    int left = 0;
    int right = size - 1;
    int result = -1;
    
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (arr[mid] == target) {
            result = mid;
            right = mid - 1;
        } else if (arr[mid] < target) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    
    return result;
}

int findLastOccurrence(int arr[], int size, int target) {
    int left = 0;
    int right = size - 1;
    int result = -1;
    
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (arr[mid] == target) {
            result = mid;
            left = mid + 1;
        } else if (arr[mid] < target) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    
    return result;
}

int main() {
    int n;
    std::cin >> n;
    
    int arr[n];
    for (int i = 0; i < n; ++i) {
        std::cin >> arr[i];
    }
    
    int target;
    std::cin >> target;
    
    int firstIndex = findFirstOccurrence(arr, n, target);
    int lastIndex = findLastOccurrence(arr, n, target);
    
    if (firstIndex != -1 && lastIndex != -1) {
        std::cout << "The first occurrence of " << target << " is at index " << firstIndex << "." << std::endl << "The last occurrence of " << target << " is at index " << lastIndex << "." <<std::endl;
    } else {
        std::cout << "Target value " << target << " is not found in the array." << std::endl;
    }
}
