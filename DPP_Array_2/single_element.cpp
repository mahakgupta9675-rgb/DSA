// single number 136 

#include<vector>
#include <algorithm>
#include <iostream>
using namespace std ;


int singleNumber(vector<int>& nums) {

    int ans =0;
    for(int i=0;i<nums.size();i++){
        ans =ans^nums[i];
    
    }
    return ans;    
    
}


int main()
{
    vector<int> arr = { 1, 1, 2, 2, 3, 4, 4};
    cout << singleNumber(arr) << "\n";
    return 0;
}