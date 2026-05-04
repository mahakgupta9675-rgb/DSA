#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

//O(n2) time com and space O(1)

vector<int> twoSum(vector<int>& arr,int target){
    for(int i = 0 ; i<arr.size()-1 ; i++){
        for(int j = i+1 ; j<arr.size() ; j++){
            if(arr[i]+arr[j]==target){
                vector<int> ans;
                // ans.push_back(i);
                // ans.push_back(j);
                // return ans;
                //return vector<int> {i,j};
                return {i,j};
            }    
        }
    }
    
}

// O(n × log(n)) time and O(1) space-------

bool twSum(vector<int> &arr, int target){
  
    sort(arr.begin(), arr.end());

    int left = 0, right = arr.size() - 1;

    while (left < right){
        int sum = arr[left] + arr[right];

    
        if (sum == target)
            return true;
        else if (sum < target)
            left++; 
        else
            right--; 
    }
    return false;
}

int main(){
    vector<int> arr ={1,4,6,7,3};

    int target;
    cout<<"Target"<<endl;
    cin>>target;

    vector<int> result=twoSum(arr,target);
    if(result.size()==2)
        cout<<result[0]<<" "<<result[1];
}