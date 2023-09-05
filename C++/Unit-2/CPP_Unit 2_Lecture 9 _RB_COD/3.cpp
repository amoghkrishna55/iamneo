// Mukesh is building a language translation program. He needs to implement a program that counts the number of
// words in a sentence entered by the user. Use the pointer-to-pointer concept to iterate through the sentence and
// count the vowels.
// Note: This is a sample question asked in an Amcat interview.
// Input format :
// The input consists of a list of words/sentences.
// Output format :
// The output prints the count of the vowels that are present in the given sentence/sentences.
// Code constraints:
// 1 ‹= Total number of characters in the sentence(s) ‹= 1000
// The vowels are not case-sensitive.

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string sentence;
    getline(cin, sentence);

    int vowel_count = 0;
    char *p = &sentence[0];
    char **ptr = &p;

    while (**ptr != '\0')
    {
        if (**ptr == 'a' || **ptr == 'e' || **ptr == 'i' || **ptr == 'o' || **ptr == 'u' ||
            **ptr == 'A' || **ptr == 'E' || **ptr == 'I' || **ptr == 'O' || **ptr == 'U')
        {
            vowel_count++;
        }
        (*ptr)++;
    }

    cout << vowel_count;
}
