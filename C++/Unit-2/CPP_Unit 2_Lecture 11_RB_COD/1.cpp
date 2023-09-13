// Sahana is a software developer working on a project that involves managing
// product ratings. She needs a program that allows her to input product ratings and
// calculate their average rating for various products. She also wants to utilize the
// "pointer to data member" concept to efficiently store and access the average rating
// for each product.
// Note: This is a sample question asked in a Wipro interview.
// Input format:
// The first line contains a string representing the product name.
// The second line contains an integer, N, representing the number of ratings.
// N lines follow, each containing a double-point number representing an individual
// rating. The ratings range from 0.0 to 5.0.
// Output format :
// The output displays the product details, including the product name and average
// rating.
// Refer to the sample output for formatting specifications.
// Code constraints:
// 0 <= N <= 100
// Each rating will be a double-point number between 0.0 and 5.0.

// You are using GCC
#include<iostream>
#include<vector>
#include<string>
#include<iomanip>
using namespace std;

class avg{
    public:
    string name;
    double *ar;
    
    avg(string name){
        this->name = name;
        ar = new double(0.0);
    }
    
    void calc(vector<double> &rat){
        double count = 0.0;
        for(auto rating : rat){
            count += rating;
        }
        *ar = count/rat.size();
        disp();
    }
    
    void disp(){
        cout << fixed << setprecision(2);
        cout << "Product Details: " << endl;
        cout << "Name: " << name << endl;
        cout << "Average Rating: " << *ar;
    }
};

int main(){
    int a;
    string line;
    cin >> line;
    avg test(line);
    cin >> a;
    
    vector<double> ratings(a);
    for(int i=0;i<a;i++){
        cin >> ratings[i];
    }
    test.calc(ratings);
}
