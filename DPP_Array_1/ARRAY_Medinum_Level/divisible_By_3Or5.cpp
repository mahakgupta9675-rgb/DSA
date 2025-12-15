// Given an array, print all elements divisible by 3 or 5.

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    int arr[n];

    cout << "Enter elements: ";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Elements divisible by 3 or 5 are  ";
    for(int i = 0; i < n; i++) {
        if(arr[i] % 3 == 0 || arr[i] % 5 == 0) {
            cout << arr[i] << " ";
        }
    }

    return 0;
}