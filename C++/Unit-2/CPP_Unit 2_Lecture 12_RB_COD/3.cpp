// Sita wants to write a program to create a Student class with the following attributes:
// int rollno, int marki, int mark2, and int mark3.
// Help her to create an array of objects for the above class. In the main class, calculate
// and print the following.
// • Total marks obtained by each student.
// • The highest mark in each subject with the roll number of the student who
// scored it.
// • The student who obtained the highest total mark along with the mark.
// Note: This kind of question will be helpful in clearing mPhasis tests.
// Input format:
// The first line of the input consists of the value of n.
// The next n lines consist of roll number, mark, mark2, and mark separated by a space.
// Output format :
// The first n lines of output print the total marks for each student.
// After printing a new line, for each subject, the output prints the student's roll number
// who scored the highest mark along with the highest mark, separated by a space in
// three lines.
// After printing a new line, the last line prints the roll number of the student who scored
// the highest total adding up all subjects along with the total marks scored.

#include<iostream>
using namespace std;

int main(){
    int a;
    cin >> a;
    int arr[a][4];
    for(int i=0;i<a;i++){
        for(int j=0;j<4;j++){
            cin >> arr[i][j];
        }
    }
    int rollsum = 0; 
    int maxsum = 0; 
    for(int i=0;i<a;i++){
        int sum = 0;
        for(int j=1;j<4;j++){
            sum += arr[i][j];
        }
        if(sum>maxsum){
            rollsum = arr[i][0];
            maxsum = sum;
        }
        cout << sum << endl;
    }
    cout << endl;
    
    for(int j=1;j<4;j++){
        int max = arr[0][j];
        int roll = arr[0][0];
        for(int i=1;i<a;i++){
            if(arr[i][j]>max){
                max = arr[i][j];
                roll = arr[i][0];
            }
        }
        cout << roll << " " << max;
        cout << endl;
    }
    cout << rollsum << " " << maxsum; 
}

