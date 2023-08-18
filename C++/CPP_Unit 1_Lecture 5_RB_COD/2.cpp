// A retail shop wants to keep track of its total sales for a specific period. They need a program that allows them to
// input the sales amount for each transaction and calculate the total sales.

// Your task is to write a program to calculate and display the total sales amount of a shop. The shop sells various
// items, and the sales amount of each item is provided as input. Your program should maintain a record of the
// total sales across all instances of the class using static data members and static member functions.
// Note: This is a sample question asked in a Deloitte interview.
// Input format:
// The first line of input contains an integer, n, representing the number of sales instances.
// The next n lines contain the sales amount made by each instance. Each line contains a positive floating-point
// value.
// Output format :
// The output consists of a single line displaying the total sales amount of the shop.
// Refer to the sample output for the formatting specifications.
// Code constraints:
// The number of sales instances should not exceed 100.
// Each sales amount should be a positive floating-point value.

// You are using GCC
#include <iostream>
#include <iomanip>
using namespace std;

class Shop{
  static double amt;
  
  public:
  static double totalSales(){
      return amt;
  }
  
  static void addSales(double salesAmount){
      amt += salesAmount;
  }
};

double Shop::amt = 0.0;

int main(){
    int x;
    cin >> x;
    for(int y=0;y<x;y++){
        double amt;
        cin >> amt;
        Shop::addSales(amt);
    }
    cout << fixed << setprecision(2);
    cout << "Total Sales: " << Shop::totalSales();
}