// Given an array arr of n integers and an index key(0-based index). Your task is to return the element present at the index key in the array

#include <iostream>
using namespace std;

int main() {
    int n, key;
    cin >> n;

    int arr[n];
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cin >> key;
    cout << arr[key];

    return 0;
}