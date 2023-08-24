// At a university, two student clubs, "Tech Wizards" and "Creative Minds," have decided to merge and
// form a new club called "Innovative Thinkers."

// As part of the merger process, the club leaders, Alex and Sarah, need to create a program that
// merges the member lists of the two clubs and identifies the unique members in the merged list.
// The program takes two arrays, arrl, and arr2, as inputs. Each array represents the member IDs of
// the respective clubs. Alex and Sarah want to combine the arrays and generate a single array,
// merged, containing all the unique member IDs.
// To ensure a seamless merger, the program should eliminate any duplicate member IDs and only
// include unique IDs in the merged array. This way, they can maintain a consolidated member list
// without repetition.

// Note: This is a sample question asked in Capgemini recruitment.
// Input format:
// The first line of input consists of the number of elements n in the first array.
// The second line of input consists of -sorted elements, separated by space.
// The third line of input consists of the number of elements m in the second array.
// The fourth line of input consists of m-sorted elements, separated by space.
// Output format:
// The output prints the unique elements in the merged array, separated by space.

// You are using GCC
#include <iostream>
using namespace std;

int main(){
    int a,b;
    int arr1[100],arr2[100];
    cin >> a;
    for(int x=0;x<a;x++){
        int n;
        cin >> n;
        int val = 1;
        for(int y=0;y<x;y++){
            if(arr1[y]==n){
                val = 0;
                --a;
                --x;
                break;
            }
        }
        if(val==1){
            arr1[x] = n;
        }
    }
    cin >> b;
    for(int x=0;x<b;x++){
        cin >> arr2[x];
    }
    for(int x=a;x<a+b;x++){
        int val = 1;
        for(int y=0;y<x;y++){
            if(arr1[y]==arr2[x-a]){
                val = 0;
                --a;
                --x;
                break;
            }
        }
        if(val==1){
            arr1[x] = arr2[x-a];
        }
    }
    for(int x=0;x<a+b;x++){
        cout << arr1[x] << " ";
    }
}