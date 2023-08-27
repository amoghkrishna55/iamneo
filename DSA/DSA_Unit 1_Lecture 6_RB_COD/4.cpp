// You are a teacher at a school, and you have recently conducted an exam for your students. The exam grades of the students are
// represented as an array of integers. You want to determine the number of inversions in the list of grades.
// Given an array of integers, find the inversion count in the array using Insertion Sort.
// Inversion Count: For an array, the inversion count indicates how far (or close) the array is from being sorted. If the array is already sorted,
// then the inversion count is O. If an array is sorted in reverse order, then the inversion count is the maximum.
// Formally, two elements arrli] and arril form an inversion if arr[i] › arrlil and i ‹ j

#include <iostream>
using namespace std;

int insertionSortInversionCount(int *arr, int n) {
  int inv_count = 0;
  for (int i = 1; i < n; i++) {
    int key = arr[i];
    int j = i - 1;
    while (j >= 0 && arr[j] > key) {
      arr[j + 1] = arr[j];
      j--;
      inv_count++;
    }
    arr[j + 1] = key;
  }
  return inv_count;
}

int main() {
  int n;
  cin >> n;
  int *arr = new int[n];
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }
  int result = insertionSortInversionCount(arr, n);
  cout << result;
  delete[] arr;
  return 0;
}
