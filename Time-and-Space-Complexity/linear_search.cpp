/*
Best Case: O(1) (element at first position)
Worst Case: O(n) (element at last position or absent)
Average Case: O(n)
*/

#include <iostream>
using namespace std;

int main() {
    
    cout <<"enter target element: ";
    int target;
    cin >> target;
    int arr[6];
    cout << "Enter 6 array elements:" << endl;

    for (int i = 0; i < 6; i++) {
        cin >> arr[i];
    }

    for (int i = 0; i < 6; i++) {
        if (arr[i]==target){
            cout << "element found at "<<(i+1) <<"position";
            break;        
        }
    }

    return 0;
}
