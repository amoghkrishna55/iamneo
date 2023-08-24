// Pooja is a teacher who recently conducted two exams for her students, "Mathematics" and
// "Science." She is working on a program to merge the scores of both exams and identify the
// maximum score achieved by any student.
// The program takes two arrays, mathScores, and scienceScores, as inputs. Each array represents
// the scores of the respective subjects for all the students. Pooja wants to combine the arrays and
// find the maximum score obtained by any student in both exams.

// By merging the arrays, Pooja can have a comprehensive view of the student's performance
// across both subjects and identify the highest score achieved, which can be helpful for further
// analysis or recognizing outstanding performance.
// Note: This is a sample question asked in CTS recruitment.
// Input format :
// The first line of input consists of the number of elements n in the first array.
// The second line of input consists of n elements, separated by space.
// The third line of input consists of the number of elements m in the second array.
// The fourth line of input consists of m elements, separated by space.
// Output format :
// The output prints the maximum element in the merged array.

// You are using GCC
#include<iostream>
using namespace std;

int main(){
    int a,b;
    int arr[100];
    cin >> a;
    for(int x=0;x<a;x++){
        cin >> arr[x];
    }
    cin >> b;
    for(int x=a;x<a+b;x++){
        cin >> arr[x];
    }
    int max = arr[0];
    for(int x=0;x<a+b;x++){
        if(arr[x]>max){
            max = arr[x];
        }
    }
    cout << max;
}