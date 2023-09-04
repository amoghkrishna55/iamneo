// Given an array of integers, write a program to rotate the array to the right by a specified number of positions. The program should prompt the user to enter the number of positions to rotate and then display the
// updated array.
// Input format :
// The first line of input contains an integer representing the size of the array.
// The second line of input contains the elements of the array, separated by a space.
// The last line of input contains an integer to enter the number of positions to rotate the array.
// Output format:
// The output displays the original array before rotation and the updated array after rotation.

// Refer to the sample output for formatting specifications.
// Code constraints:
// Maximum size of the array (MAX_SIZE = 100).
// The size of the array should be a positive integer.
// The elements of the array can be any integer.
// The number of positions to rotate the array can be positive

#include <iostream>

int main() {
    int size;
    std::cin >> size;
    
    int arr[100];
    for (int i = 0; i < size; i++) {
        std::cin >> arr[i];
    }
    
    int positions;
    std::cin >> positions;
    
    std::cout << "Original array: ";
    for(int i=0;i<size;i++){
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    int temp[size];
    for (int i = 0; i < size; i++) {
        temp[(i + positions) % size] = arr[i];
    }
    

    for (int i = 0; i < size; i++) {
        arr[i] = temp[i];
    }
    std::cout << "Updated array: ";

    for (int i = 0; i < size; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
    
    return 0;
}
