// You have been assigned the task of designing a program that checks whether a given string is a valid phone
// number or not.
// Write a function isValidPhoneNumber that takes a phoneNumber (string) as input and determines whether it is
// a valid phone number. The phone number format should be XXX-XXX-XXXX, where × represents a digit. The
// number is considered valid if the hyphens are in exact same positions and the length of the string is 12.
// Implement the function isValidPhoneNumber and write a main program to test it. The main program should
// prompt the user to enter a phone number, and then display whether the entered string is a valid phone number
// or not. If the number is valid, print the numbers without using hyphens.
// Note: This kind of question helps in clearing Capgemini tests.
// Input format:
// The input consists of a phone number in the format XXX-XXX-XXXX, where X represents a digit.
// Output format :
// The output displays whether the entered string is a valid phone number or not as shown in the sample output.
// If the number is valid, the output displays the number without hyphens.
// Code constraints:
// The phone number should be in the format XXX-XXX-xXXX, with a total length of 12 characters.
// Each X in the phone number should be a digit (0-9).
// No additional characters or spaces should be present in the input.

#include <iostream>
using namespace std;

int main()
{

    string num;
    cin >> num;

    if (num.length() == 12)
    {
        if (num[3] == '-' && num[7] == '-')
        {
            cout << "Yes, the phone number is valid." << endl;
            for (auto i : num)
            {
                if (i != '-')
                {
                    cout << i;
                }
            }
        }

        else
        {
            cout << "No, the phone number is not valid." << endl;
        }
    }

    else
    {
        cout << "No, the phone number is not valid." << endl;
    }

    return 0;
}