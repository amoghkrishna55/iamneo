// In a voting booth, voters cast their votes by entering the ID number of their preferred candidate. Your task is to develop a vote-counting system that identifies the majority candidate, i.e., the candidate who receives
// more than half of the total votes.

// You are provided with an array of integers representing the ID numbers of the candidates in the order they were voted for. Your system needs to determine if a majority candidate exists and, if so, declare them as the
// winner.

// Note: This kind of question will be helpful in clearing TCS recruitment.
// Input format :
// The first line contains a single integer, N, representing the number of votes cast.
// The second line contains N space-separated integers, representing the ID numbers of the candidates in the order they were voted for.
// Output format :
// The output prints the majority candidate ID.
// If no majority candidate exists, output "No majority candidate found"

// You are using GCC
#include <iostream>

int main() {
    int N;
    std::cin >> N;
    
    int* votes = new int[N];
    for (int i = 0; i < N; i++) {
        std::cin >> votes[i];
    }
    
    int candidate = -1;
    int count = 0;
    
    for (int i = 0; i < N; i++) {
        if (count == 0) {
            candidate = votes[i];
            count = 1;
        } else if (candidate == votes[i]) {
            count++;
        } else {
            count--;
        }
    }
    
    int majority_candidate_count = 0;
    for (int i = 0; i < N; i++) {
        if (votes[i] == candidate) {
            majority_candidate_count++;
        }
    }
    
    if (majority_candidate_count > N / 2) {
        std::cout << "The majority candidate is ID " <<candidate << std::endl;
    } else {
        std::cout << "No majority candidate found" << std::endl;
    }
    
    delete[] votes;
    return 0;
}
