// Write a program to delete an element from an array and shift all the elements to the left to fill the gap. The program should prompt the user to enter the position of the element to be deleted and then display the updated array.
// Input format :
// The first line of input contains an integer representing the size of the array.
// The second line of input contains the elements of the array, separated by a space.
// The third line of input contains an integer to indicate the position of the element to be deleted.
// Output format :
// The output displays the original array before deletion and the updated array after deletion.
// Refer to the sample output format for formatting specifications.

#include <iostream>

int main()
{
    const int MAX_SIZE = 100;
    int n;
    std::cin >> n;
    int arr[MAX_SIZE];
    for (int i = 0; i < n; ++i)
    {
        std::cin >> arr[i];
    }
    int position;
    std::cin >> position;
    std::cout << "Original array:";
    for (int i = 0; i < n; ++i)
    {
        std::cout << " " << arr[i];
    }
    std::cout << std::endl;
    if (position < 1 || position > n)
    {
        std::cout << "Invalid position!" << std::endl;
    }
    else
    {
        for (int i = position - 1; i < n - 1; ++i)
        {
            arr[i] = arr[i + 1];
        }
        n--;
        std::cout << "Updated array:";
        for (int i = 0; i < n; ++i)
        {
            std::cout << " " << arr[i];
        }

        std::cout << std::endl;
    }
    return 0;
}
