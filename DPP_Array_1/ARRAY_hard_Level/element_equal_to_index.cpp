// Given an array arr. Your task is to find the elements whose value is equal to that of its index value

#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int arr[n];

    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Elements equal to their index:  ";
    for(int i = 0; i < n; i++) {
        if(arr[i] == i) {
            cout << arr[i] << " ";
        }
    }

    return 0;
}