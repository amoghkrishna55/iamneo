// Smith wants to buy a second-hand car so he wants to check for a few parameters before buying.
// So you have to design a class Car with private attributes brand and fuelConsumption. Implement
// a friend function calculateFuelCost (const Car&, double, double) that takes a car object, the
// distance traveled, and the fuel price per liter as parameters and calculates and returns the total
// fuel cost.

// Write a program to input the brand, fuel consumption, distance traveled, and fuel price, create an
// object of the Car class, calculate the fuel cost using the calculateFuelCost function, and display
// the result.

// Note: This is a sample question asked in TCS recruitment.
// Input format :
// The first line consists of the car brand as a string.
// The second line consists of the fuel consumption in liters per 100 km as a floating-point number.
// The third line consists of the distance traveled in kilometers as a floating-point number.
// The fourth line consists of the fuel price per liter as a floating-point number.
// Output format :
// The output prints the total fuel cost as a floating-point number, rounded off to two decimal
// places.

// You are using GCC
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

class Car{
    string brand;
    double fuelCon;
    friend double calculateFuelCost(Car const car, double dist, double cost);
    public:
    void sets(string b, double fuel){
        fuelCon = fuel;
        brand = b;
    }
};

double calculateFuelCost(Car const car, double dist, double cost){
    return ((dist/100)*car.fuelCon)*cost;
}

int main(){
    Car car;
    string brand;
    double fuelCon, dist, cost;
    cin >> brand >> fuelCon >> dist >> cost;
    car.sets(brand,fuelCon);
    cout << fixed << setprecision(2);
    cout << calculateFuelCost(car,dist,cost);
    
}