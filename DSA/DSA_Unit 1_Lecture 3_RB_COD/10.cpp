// Given an array of strings, write a program to traverse through the array and find the index of a specific string. The program should prompt the user to enter the string to be searched and then display the index if found or a message indicating that the string was not
// found

// Input format :
// The tirst ine of input consists or an inteder representing the size of the arrov.
// The second line of inbut contains the strinas of the arrov. separated ov ~ line space
// The last line of input contains the string to be searched.
// Output format :
// The output displays the index of the found string (if found or a "String not found!" message.

#include <iostream>
#include <string>

const int MAX_SIZE = 100;

int main()
{
    int size;
    std::string array[MAX_SIZE];
    std::string searchStr;

    std::cin >> size;
    for (int i = 0; i < size; ++i)
    {
        std::cin >> array[i];
    }
    std::cin.ignore();
    std::getline(std::cin, searchStr);

    int foundIndex = -1;
    for (int i = 0; i < size; ++i)
    {
        if (array[i] == searchStr)
        {
            foundIndex = i;
            break;
        }
    }

    if (foundIndex != -1)
    {
        std::cout << foundIndex << std::endl;
    }
    else
    {
        std::cout << "String not found!" << std::endl;
    }

    return 0;
}
