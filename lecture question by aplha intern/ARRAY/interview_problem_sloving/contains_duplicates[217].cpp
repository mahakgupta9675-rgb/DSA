#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
// buteforce-------------------------------
bool duplicateElement(vector<int>&arr){
    int n=arr.size();
    for(int i = 0; i < n; i++){
        for(int j = i + 1; j < n; j++){
            if(arr[i] == arr[j])
                return true;
        }
    }
    return false;
}
// optimal----------------------------------

bool duplicateElement(vector<int>& nums) {
    sort(nums.begin(), nums.end());
    int n = nums.size();
    for (int i = 1; i < n; i++) {
        if (nums[i] == nums[i - 1])
            return true;
    }
    return false;
}

int main(){
    vector<int> arr={1,3,4,1,2};

    if(duplicateElement)
        cout<<"Duplicate element";
    else
        cout<<"not Duplicate element";
}
