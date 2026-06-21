/*
Problem: Second Largest Element in an Array

Approach:
Maintain two variables:
1. largest
2. secondLargest

Traverse the array once.
- If current element is greater than largest,
  update both largest and secondLargest.
- Else if current element is greater than
  secondLargest and not equal to largest,
  update secondLargest.

Time Complexity: O(n)
Space Complexity: O(1)
*/


#include <iostream>
#include <climits>
using namespace std;

int main() {

    cout << "Enter range: ";
    int n;
    cin >> n;

    int arr[n];

    cout << "Enter " << n << " elements:" << endl;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int largest = INT_MIN;
    int secondLargest = INT_MIN;

    for (int i = 0; i < n; i++) {

        if (arr[i] > largest) {
            secondLargest = largest;
            largest = arr[i];
        }

        else if (arr[i] > secondLargest && arr[i] != largest) {
            secondLargest = arr[i];
        }
    }

    if (secondLargest == INT_MIN) {
        cout << "Second largest element does not exist.";
    }
    else {
        cout << "Second largest element: " << secondLargest;
    }

    return 0;
}
