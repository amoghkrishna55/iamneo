// Given a 2D array of integers, and envelopes, representing the width and height of envelopes, find the maximum number of envelopes that can be nested inside each other, using binary search.
// An envelope can only be nested if both its width and height are strictly greater than the width and height of the envelope it is being nested in.
// Note: You cannot rotate the envelopes.

// Example
// Input:
// n=4
// envelopes = [[5,4], [6,4],[6,7], [2,3]]
// Output:
// 3
// Explanation:
// The maximum number of envelopes that can be nested inside each other is 3 ([2,3] => [5,4] => [6,7]).
// Company Tag: Amazon, Zscaler, BlackRock
// Input format :
// The first line of input consists of an integer n, representing the number of envelopes.
// The next n lines of input consist of two integers wi and hi, representing the width and height of n envelopes.
// Output format :
// The output prints the maximum number of envelopes that can be nested inside each other.

#include <iostream>

int maxEnvelopes(int envelopes[][2], int n) {
    for (int i = 0; i < n; ++i) {
        for (int j = i + 1; j < n; ++j) {
            if (envelopes[i][0] > envelopes[j][0] &&
            envelopes[i][1] > envelopes[j][1]) {
                std::swap(envelopes[i], envelopes[j]);
            }
        }
    }
    
    int dp[n];
    for (int i = 0; i < n; ++i) {
        dp[i] = 1;
    }
    
    for (int i = 1; i < n; ++i) {
        for (int j = 0; j < i; ++j) {
            if (envelopes[i][0] > envelopes[j][0] &&
            envelopes[i][1] > envelopes[j][1]) {
                dp[i] = std::max(dp[i], dp[j] + 1);
            }
        }
    }
    
    int maxLength = 0;
    for (int i = 0; i < n; ++i) {
        maxLength = std::max(maxLength, dp[i]);
    }
    
    return maxLength;
}

int main() {
    int n;
    std::cin >> n;
    
    int envelopes[n][2];
    for (int i = 0; i < n; ++i) {
        std::cin >> envelopes[i][0] >> envelopes[i][1];
    }
    
    int result = maxEnvelopes(envelopes, n);
    std::cout << result << std::endl;
    
    return 0;
}
