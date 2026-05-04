#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// The Reversal Algorithm------Time Comp: O(n) Auxiliary Space: O(1)
// First reverse all the elements of the array. 
// Then reverse first d elements.
// Finally, reverse last (n - d) elements to get the final rotated array.

void rotateArr(vector<int>& arr, int d) {
    int n = arr.size();
    d %= n;

    reverse(arr.begin(), arr.end());
  
    reverse(arr.begin(), arr.begin() + d);

    reverse(arr.begin() + d, arr.end());
}

// rotate one by one Time Complexity: O(n * d) Auxiliary Space: O(1)

void rotateArr(vector<int>& arr, int d) {
    int n = arr.size();
  
    // Repeat the rotation d times
    for (int i = 0; i < d; i++) {
      
        // Right rotate the array by one position
        int last = arr[n - 1];
        for (int j = n - 1; j > 0; j--) {
            arr[j] = arr[j - 1];
        }
        arr[0] = last;
        // left rotate the array by one position (Don't use both left and right at same time)
        int first = arr[0];
            for (int j = 0; j < n - 1; j++) {
                arr[j] = arr[j + 1];
            }
            arr[n - 1] = first;
    }
}

int main() {
    vector<int> arr = { 1, 2, 3, 4, 5, 6 };
    int d = 2;
    
  	rotateArr(arr, d);
  
    for (int i = 0; i < arr.size(); i++) 
        cout << arr[i] << " ";
    return 0;
}