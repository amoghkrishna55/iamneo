// You are tasked with designing a simple airline reservation system for a small airline company. The system
// should allow the airline to manage and provide information about their flight destinations and the number of
// flights available to each destination.
// Class and Functions:
// You need to implement a class named Airline with the following functions:
// void initialize: Initializes the airline's system with no destinations and no flights.
// void addDestination (int destination, int numFlights): Adds a new destination and the number of flights
// available to that destination. The system can store up to 100 destinations.
// int checkFlights (int destination): Checks and returns the number of available flights to a specific destination. If
// the destination is not found, it returns - 1.
// Note: This kind of question will be helpful in clearing AMCAT tests.
// Input format :
// The first input consists of an integer n, representing the number of destinations the airline wants to add.
// The next n-line input, n-space separated, consists of two integers for each destination: destination code and
// numFlight
// The last input consists of an integer search for destination Q.
// Output format :
// The output displays the following one of the format
// If the search destination is found in the system, it prints the number of available flights to that destination.
// If the search destination is not found in the system, it prints "Destination not found."

#include <iostream>
#include <vector>
using namespace std;

class Airline {
    public:
    Airline() {
        destinations.clear();
        flights.clear();
    }
    
    void addDestination(int destination, int numFlights) {
        destinations.push_back(destination);
        flights.push_back(numFlights);
    }
    
    int checkFlights(int destination) {
        for (int i = 0; i < destinations.size(); i++) {
            if (destinations[i] == destination) {
                return flights[i];
            }
        }
        return -1;
    }
    
    private:
    vector<int> destinations;
    vector<int> flights;
};

int main() {
    Airline airline;
    int n;
    cin >> n;
    
    for (int i = 0; i < n; i++) {
        int destination, numFlights;
        cin >> destination >> numFlights;
        airline.addDestination(destination, numFlights);
    }
    
    int searchDestination;
    cin >> searchDestination;
    
    int availableFlights = airline.checkFlights(searchDestination);
    if (availableFlights != -1) {
        cout << availableFlights << endl;
    } else {
        cout << "Destination not found" << endl;
    }
    
    return 0;
}
