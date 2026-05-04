// class Solution {
// public:
//     int pivotIndex(vector<int>& nums) {
//         // arr = [1, 7, 3, 6, 5, 6]
//         //TC : O(n^2) 
//         //SP : O(1)
//         int n = nums.size();

//         for (int i = 0; i < n; i++) {
//             int leftsum = 0;
//             for (int l = 0; l < i; l++) {
//                 leftsum += nums[l];
//             }

//             int rightsum = 0;
//             for (int r = i + 1; r < n; r++) {
//                 rightsum += nums[r];
//             }

//             if (leftsum == rightsum) {
//                 return i;
//             }
//         }
//         return -1;
//     }
// };
#include <iostream>
#include <vector>
using namespace std;

int pivotIndex(vector<int>& nums) {
    int n = nums.size();

    for (int i = 0; i < n; i++) {
        int leftsum = 0;
        for (int l = 0; l < i; l++) {
            leftsum += nums[l];
        }

        int rightsum = 0;
        for (int r = i + 1; r < n; r++) {
            rightsum += nums[r];
        }

        if (leftsum == rightsum) {
            return i;
        }
    }
    return -1;
}

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    vector<int> nums(n);
    cout << "Enter elements: ";
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    int result = pivotIndex(nums);

    if (result != -1) {
        cout << "Pivot Index: " << result << endl;
    } else {
        cout << "No Pivot Index found" << endl;
    }

    return 0;
}


