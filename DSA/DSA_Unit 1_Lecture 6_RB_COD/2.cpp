// Imagine you are developing a program for a scientific research project. The project requires sorting a collection of experimental data represented by floating-point numbers. Your task is to implement a program that can sort the data using the Bubble Sort
// algorithm.

// The program should prompt the user to enter the number of data points they have and then input the corresponding floating-point numbers. The program should then use the Bubble Sort algorithm to sort the data in ascending order.
// As the Bubble Sort algorithm progresses, the program should display intermediate results after each iteration, showing the partially sorted data.
// Finally, the program should display the fully sorted array.

// Note: This is a sample question asked in Capgemini recruitment.
// Input format:
// The first line of input consists of n, the number of elements in the array.
// The second line of input consists of n elements of the array, separated by space.
// Output format :
// The output prints the result of each iteration.
// The last line of output prints the final sorted array.
// The numbers should be rounded off to 2 decimal places.

// You are using GCC
#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;

void printArray(vector<double>& arr, int iteration) {
    cout << "After iteration " << iteration << ": ";
    for (int i = 0; i < arr.size(); i++)
    cout << fixed << setprecision(2) << arr[i] << " ";
    cout << endl;
}

void bubbleSort(vector<double>& arr) {
    bool swapped;
    int n = arr.size();
    for (int i = 0; i < n - 1; i++) {
        swapped = false;
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swapped = true;
                break;
            }
            else{
                swapped = false;
            }
        }
        printArray(arr, i + 1);
        if (!swapped)
        break;
    }
}

int main() {
    int n;
    cin >> n;
    vector<double> arr(n);
    for (int i = 0; i < n; i++)
    cin >> arr[i];
    
    bubbleSort(arr);
    
    cout << "Sorted array: ";
    for (int i = 0; i < n; i++)
    cout << fixed << setprecision(2) << arr[i] << " ";
    cout << endl;
    
    return 0;
}
