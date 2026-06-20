/*
Problem: Largest Element in Array

Approach:
Traverse the array and keep updating the maximum element.

Time Complexity: O(n)
Space Complexity: O(1)
*/

#include <iostream>
using namespace std;

int main() {
    int arr[6];
    int max = 0;
    cout << "Enter 6 array elements:" << endl;

    for (int i = 0; i < 6; i++) {
        cin >> arr[i];
        if (arr[i]>max){
            max = arr[i];
        }
    }

    cout <<"largest element: "<<max;

    return 0;
}
