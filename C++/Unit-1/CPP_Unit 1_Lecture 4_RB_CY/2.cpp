// A hospital wants to store the information of its patients. Help them by providing a code. Your code
// should create a structure to store the information of patients coming to the hospital. The
// information stored will be the patient id, the patient's gender (1 for Male and 2 for Female), and the
// age of the patient. There may be n number of patients visiting the hospital, where n will not
// exceed 50 at any time.

// Write a program to accept the information for n patients. Write a function to find the total number
// of male and female patients visited. Also, write a function that prints the patients whose age
// is greater than 40.
// Function specifications:
// void print_gender - To calculate the count of male and female patients.
// void print_age - To calculate the count of patients whose age is above 40.
// Note: This is a sample question asked in a TCS interview.
// Input format :
// The first line consists of an integer n, representing the number of patients.
// The next n lines contain the patient details, each line consisting of three space-separated
// integers: id, gender, and age.
// Output format :
// The first line displays the count of male and female patients separated by a space.
// The second line displays the count of patients above 40 years.

// You are using GCC
#include<iostream>
using namespace std;

struct patient{
    int id;
    int gender;
    int age;
};

void print_gender(int num1,int num2){
    cout << num1 << " " << num2 << endl;
}

void print_age(int num){
    cout << num;
}

int main(){
    int a, male=0, female=0, un=0;
    patient arr[50];
    cin >> a;
    for(int x=0;x<a;x++){
        cin >> arr[x].id >> arr[x].gender >> arr[x].age;
        if(arr[x].gender == 1){
            male+=1;
        }
        else if(arr[x].gender == 2){
            female+=1;
        }
        if(arr[x].age >40){
            un+=1;
        }
    }
    print_gender(male,female);
    print_age(un);
}