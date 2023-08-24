// Alex is managing an online store that sells various products. To keep track of the inventory, he has
// developed a program that merges two arrays representing the quantities of products and counts
// the total number of items in the resulting inventory.
// The program handles the scenario where Alex receives new shipments of products regularly. Each
// shipment is represented by an array, where each element corresponds to a unique product ID,
// and the value represents the quantity of that particular product in the shipment. Additionally, the
// current inventory is stored in another array.

// To ensure accurate inventory management, Alex wants to create a program that combines the
// new shipments with the existing inventory. The program should merge the two arrays and count
// the total number of items available in the resulting inventory.

// Note: This is a sample question asked in TCS recruitment.
// Input format :
// The first line of input consists of the number of elements in the first array n.
// The second line of input consists of n elements, separated by space.
// The third line of input consists of the number of elements in the second array m.
// The fourth line of input consists of m elements, separated by space.
// Output format :
// The output prints the number of elements in the merged array.

// You are using GCC
#include<iostream>
using namespace std;

int main(){
    int a,b,sum=0;
    int arr[100];
    cin >> a;
    for(int x=0;x<a;x++){
        cin >> arr[x];
        ++sum;
    }
    cin >> b;
    for(int x=a;x<a+b;x++){
        cin >> arr[x];
        ++sum;
    }
    cout << sum;
}