//Replace every element by its square and print the updated array.

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

    for(int i = 0; i < n; i++) {
        arr[i] = arr[i] * arr[i];
    }

    cout << "Updated array (squares):";
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}