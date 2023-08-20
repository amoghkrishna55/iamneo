// Seema is building a ticket reservation system and she wants to reserve tickets and cancel for a
// particular id. She created two classes: Ticket and Reservation. Each Ticket has a private attribute
// ticketld, and each Reservation has a private attribute reservedTickets (an array of tickets). The
// Reservation class contains a friend function cancelReservation (Reservation&, const Ticket& that
// allows a ticket to be canceled from a reservation.

// Implement the classes and the cancelReservation function and write a program to manage ticket
// reservations.
// Note: This is a sample question asked in Accenture recruitment.
// Input format :
// The first line of input consists of the total number of tickets N to be reserved.
// The second line of input consists of N space-separated ticket ids.
// The third line of input consists of the ticket id for which the reservation has to be canceled.
// Output format :
// The first line of output prints the N tickets that are reserved initially.
// If the ticket id to be canceled is present:
// -The second line prints the ticket that has been canceled.
// -The third line prints the updated list of reserved tickets after canceling the specified ticket.
// If the ticket id to be canceled is not present:
// -The second line of output prints the status of the same.

// You are using GCC
#include<iostream>
using namespace std;
class Reservation;

class Ticket{
    int ticketid;
    friend void cancelReservation(Ticket a, Reservation b, int x);
    public:
    void sets(int a){
        ticketid = a;
    }
};

class Reservation{
    int arr[100];
    friend void cancelReservation(Ticket a, Reservation b, int x);
    public:
    void sets(int arr1[]){
        for(int i=0; i<100;i++){
            arr[i] = arr1[i];
        }
    }
};

void cancelReservation(Ticket a, Reservation b, int x){
    int w = 0;
    for(int q=0; q<x; q++){
        if(b.arr[q]==a.ticketid){
            w=1;
            break;
        }
    }
    cout << "Reserved Tickets: ";
    for(int q=0;q<x;q++){
        cout << b.arr[q] << " ";
    }
    cout << endl;
    if(w==1){
        cout << "Ticket with ID " << a.ticketid << " has been canceled." << endl;
    }
    else{
        cout << "Ticket with ID " << a.ticketid << " not found in the reservation." << endl;
    }
    cout << "Reserved Tickets: ";
    for(int q = 0; q<x;q++){
        if(b.arr[q]!=a.ticketid){
            cout << b.arr[q] << " ";
        }
    }
}

int main(){
    Ticket tik;
    Reservation res;
    int a, arr[100], b;
    cin >> a;
    for(int x=0;x<a;x++){
        cin >> arr[x];
    }
    cin >> b;
    tik.sets(b);
    res.sets(arr);
    cancelReservation(tik,res,a);
}