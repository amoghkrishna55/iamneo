// You are working as a software developer for an online retail company. The company has tasked you with creating a
// program to merge two arrays that contain product IDs. The first array, stock, represents the product IDs of items currently
// in stock.
// The second array, cart, represents the product IDs of items in a customer's shopping cart. Your goal is to merge these two
// arrays into a single, sorted list of unique product IDs.
// Input format :
// The first line contains the size of the first array.
// The second line contains the elements of the first array, in ascending order.
// The third line contains the size of the second array.
// The fourth line contains the elements of the second array, in ascending order.
// Output format :
// The output displays the merged array, which is the ascending order of the given array.
// Code constraints:
// The maximum size of each array is limited to 100 (const int MAX_SIZE = 100).
// The size of each array should be a positive integer.
// The elements of each array can be any integer.
// The code assumes that the user will input valid integers as elements of the arrays.

// You are using GCC
#include <iostream>

int main() {
    int stock[100];
    int stockSize;
    int cart[100];
    int cartSize;
    std::cin >> stockSize;
    for(int i=0;i<stockSize;i++){
        std::cin >> stock[i];
    }
    std::cin >> cartSize;
    for(int i=0;i<cartSize;i++){
        std::cin >> cart[i];
    }
    int mergedSize = stockSize + cartSize;
    int merged[mergedSize];
    
    int i = 0, j = 0, k = 0;
    
    while (i < stockSize && j < cartSize) {
        if (stock[i] < cart[j]) {
            merged[k++] = stock[i++];
        } else if (stock[i] > cart[j]) {
            merged[k++] = cart[j++];
        } else {
            merged[k++] = stock[i++];
            j++;
        }
    }
    
    while (i < stockSize) {
        merged[k++] = stock[i++];
    }
    
    while (j < cartSize) {
        merged[k++] = cart[j++];
    }
    
    // Display the merged and sorted list of unique product IDs
    for (int l = 0; l < k; ++l) {
        std::cout << merged[l] << " ";
    }
    
    return 0;
}
