// You are developing a data analysis tool for a statistics company. The company needs a program that can analyze the frequency of elements in an array of integers. Your task is to write a program that takes user input for the size of the array and the elements of the
// array. The program should calculate the frequency of each element in the array and display the elements along with their frequencies.
// Note: This kind of question will be helpful in clearing AMCAT tests.
// Input format:
// The first line of input consists of an integer that represents the size of the arrav.
// The second line of input consists of an integer that represents the elements of the array, separated by spaces
// Output format :
// The program outputs a series of lines, each representing an element and its frequency in the array.

#include <iostream>
using namespace std;

int main()
{

    int intfrequency[127] = {0};
    int arr[100];

    int size;
    cin >> size;

    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
        intfrequency[arr[i]]++;
    }

    cout << "Element"
         << "\t"
         << "Frequency" << endl;

    for (int i = 0; i < size; i++)
    {
        if (intfrequency[arr[i]] != 0)
        {
            cout << arr[i] << "\t" << intfrequency[arr[i]] << endl;
            intfrequency[arr[i]] = 0;
        }
    }
}