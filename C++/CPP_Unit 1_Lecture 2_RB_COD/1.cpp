// Trade Fairs are important for companies to present their products and to get in touch with their customers and business partners. One such grand trade fair event was organized by the Confederation of National Large-
// Scale Industry.

// The number of people who attended the event on the first day was x. But as the days progressed, the event gained a good response, and the number of people who attended the event on the second day was twice the
// number of people who attended on the first day. Unfortunately, due to heavy rains on the third day, the number of people who attended the event was exactly half the number of people who attended on the first day.
// Given the total number of people who have attended the event in the first 3 days, find the number of people who have attended the event on days 1, 2, and 3.
// Note: This is a sample question asked in a HCL interview.
// Input format :
// The first line of the input is an integer value that corresponds to the total number of people.
// Output format:
// The first line of the output should display the number of attendees on day 1.
// The second line of the output should display the number of attendees on day 2.
// The third line of the output should display the number of attendees on day 3.

// You are using GCC
#include<iostream>
using namespace std;

int main(){
    int total;
    int x;
    cin >> total;
    x = (2*total)/7;
    cout << "Number of attendees on day 1: " << x << endl;
    cout << "Number of attendees on day 2: " << 2*x << endl;
    cout << "Number of attendees on day 3: " << x/2 << endl;
}