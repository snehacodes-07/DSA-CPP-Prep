/*
Problem: Count Even Numbers in an Array

Approach:
Traverse the array and check each element.
If element % 2 == 0, increment count.

Time Complexity: O(n)
Space Complexity: O(1)
*/

#include <iostream>
using namespace std;

int main() {
    int arr[6];
    int count = 0;
    cout << "Enter 6 array elements:" << endl;
    for (int i=0;i<6;i++){
        cin>>arr[i];
    }

    for (int i=0;i<6;i++){
        if(arr[i]%2 == 0){
            count++;
        }
    }
    cout<< "total even numbers: "<< count;

    return 0;
}
