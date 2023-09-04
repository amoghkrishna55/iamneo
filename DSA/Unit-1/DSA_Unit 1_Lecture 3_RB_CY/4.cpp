// You are developing a software tool for generating permutations of a given sequence. The tool takes an array of integers representing a permutation and generates the next lexicographically greater permutation. Your task is to implement the nextermutation
// function, which finds the next permutation of the given array.
// Write a program that takes the size of the array, followed by the elements of the array, and outputs the next permutation.
// Input format :
// The first line contains an integer N, representing the size of the array.
// The second line contains N space-separated integers, representing the elements of the array.
// Output format :
// The output is a single line containing the next permutation of the array. The elements are space-separated.

#include <iostream>
#include <vector>
#include <algorithm>

void nextPermutation(std::vector<int> &nums)
{
    int n = nums.size();
    int i = n - 2;
    while (i >= 0 && nums[i] >= nums[i + 1])
    {
        i--;
    }
    if (i >= 0)
    {
        int j = n - 1;
        while (j >= 0 && nums[j] <= nums[i])
        {
            j--;
        }
        std::swap(nums[i], nums[j]);
    }
    std::reverse(nums.begin() + i + 1, nums.end());
}
int main()
{
    int n;
    std::cin >> n;
    std::vector<int> nums(n);
    for (int i = 0; i < n; ++i)
    {
        std::cin >> nums[i];
    }
    nextPermutation(nums);
    for (int i = 0; i < n; ++i)
    {
        std::cout << nums[i];
        if (i < n - 1)
        {
            std::cout << " ";
        }
    }

    return 0;
}
