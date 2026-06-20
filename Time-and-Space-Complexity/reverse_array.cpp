/*Approach:
Swap first and last elements,
second and second-last elements,
and continue until the middle.

Time Complexity: O(n)
Space Complexity: O(1)*/

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
    int temp=0;

    for (int i=0;i<(n/2);i++){
        int temp = arr[i];
        arr[i] = arr[n - 1 - i];
        arr[n - 1 - i] = temp;
        }

    for (int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;

}
