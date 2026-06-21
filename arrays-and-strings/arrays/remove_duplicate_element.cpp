/*
Problem: Remove Duplicates from Sorted Array

Approach:
Use two pointers.
- Pointer i keeps track of the last unique element.
- Pointer j traverses the array.
Whenever a new unique element is found,
increment i and copy arr[j] to arr[i].

Time Complexity: O(n)
Space Complexity: O(1)
*/

#include <iostream>
using namespace std;

int main() {

    cout << "Enter range: ";
    int n;
    cin >> n;

    int arr[n];

    cout << "Enter " << n << " sorted elements:" << endl;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // If array is empty
    if (n == 0) {
        cout << "Array is empty.";
        return 0;
    }

    int i = 0;

    for (int j = 1; j < n; j++) {

        if (arr[i] != arr[j]) {
            i++;
            arr[i] = arr[j];
        }
    }

    cout << "Array after removing duplicates: ";

    for (int k = 0; k <= i; k++) {
        cout << arr[k] << " ";
    }

    cout << endl;
    cout << "Number of unique elements: " << i + 1;

    return 0;
}
