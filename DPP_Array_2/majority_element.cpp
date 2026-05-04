// majority element 169 

#include<vector>
#include <algorithm>
#include <iostream>
using namespace std ;


class Solution {
public:
    int majorityElement(vector<int>& nums) {

        sort(nums.begin(), nums.end());
        int n = nums.size();

        int candidate = nums[n/2];
        int count = 0;

        for(int i = 0; i < n; i++) {
            if(nums[i] == candidate)
                count++;
        }

        if(count > n/2)
            return candidate;
        else
            return -1;
    }
};