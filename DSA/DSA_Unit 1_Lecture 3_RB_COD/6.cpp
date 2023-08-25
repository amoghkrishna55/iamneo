// You are developing a word analysis program for a language processing company. The program needs to count the number of words in a given text that start with a specific letter. The program will take user input for the
// size of the word array, the words in the array, and the specific letter to be analyzed. It will then traverse through the array and output the count of words that start with the specified letter.
// Note: This kind of question will be helpful in clearing Infosys recruitment.
// Input format :
// The first line contains an integer 'size' representing the size of the word array.
// The next 'size' lines contain words, each word separated by a newline character.
// The last line contains a single character letter representing the specific letter to be analyzed.
// Output format :
// The output should display the updated string after the insertion, separated by spaces.
// Code constraints:
// The size of the word array should be a positive integer.
// Each word in the array should consist of alphabetic characters only.
// The length of each word should not exceed 100 characters.
// The specific letter to be analyzed should be a single character.

#include <iostream>
#include <string>

int main() {
    int size;
    std::cin >> size;
    
    std::string words[100];
    for (int i = 0; i < size; i++) {
        std::cin >> words[i];
    }
    
    char letter;
    std::cin >> letter;
    
    int count = 0;
    for (int i = 0; i < size; i++) {
        if (words[i][0] == letter) {
            count++;
        }
    }
    
    std::cout << "Number of strings starting with the letter " << letter << " : " << count << std::endl;
    
    return 0;
}
