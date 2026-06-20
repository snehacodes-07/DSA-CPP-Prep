/*
Problem: Check if Array is Sorted

Approach:
Traverse the array and compare every element
with the next element.
If any element is greater than the next one,
the array is not sorted.

Time Complexity: O(n)
Space Complexity: O(1)
*/

#include <iostream>
using namespace std;

int main() {
    cout<<"range: ";
    int n;
    cin>>n;
    int arr[n];

    cout << "Enter array elements:" << endl;
    for (int i=0;i<n;i++){
        cin>>arr[i];
    }

    bool sorted = true;

    for (int i = 0; i < n - 1; i++) {
        if (arr[i] > arr[i + 1]) {
            sorted = false;
            break;
        }
    }

    if (sorted) {
        cout << "Sorted";
    } else {
        cout << "Not Sorted";
    }

    return 0;

}

