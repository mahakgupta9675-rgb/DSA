#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

//Sorting - O(n × log(n)) Time and O(1) Space

void sort012(vector<int> &arr) {
    
    // standard sorting function
    sort(arr.begin(), arr.end()); 
}

//Counting 0s, 1s and 2s - Two Pass - Time Complexity: O(2 × n)

void sort012(vector<int> &arr) {
    int n = arr.size();
    int c0 = 0, c1 = 0, c2 = 0;

    // count 0s, 1s and 2s
    for (int i = 0; i < n; i++) {
        if (arr[i] == 0)
            c0 += 1;
        else if (arr[i] == 1)
            c1 += 1;
        else
            c2 += 1;
    }

    int idx = 0;
    
    // place all the 0s
    for (int i = 0; i < c0; i++)
        arr[idx++] = 0;

    // place all the 1s
    for (int i = 0; i < c1; i++)
        arr[idx++] = 1;

    // place all the 2s
    for (int i = 0; i < c2; i++)
        arr[idx++] = 2;
}

//Dutch National Flag Algorithm - One Pass - O(n) Time and O(1)

void sort012(vector<int> &arr) {
    int n = arr.size();
    int lo = 0;
    int hi = n - 1;
    int mid = 0;
    while (mid <= hi) {
        if (arr[mid] == 0) {
            swap(arr[lo++], arr[mid++]);
        }
        else if (arr[mid] == 1) {
            mid++;
        }
        else {
            swap(arr[mid], arr[hi--]);
        }
    }
}

int main() {
    vector<int> arr = { 0, 1, 2, 0, 1, 2 };
    sort012(arr);

    for (int i = 0; i < arr.size(); i++)
        cout << arr[i] << " ";
    return 0;
}

