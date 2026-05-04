// Move all negative number to the left side of array 

#include <iostream>
#include<algorithm>
#include<vector>
using namespace std ;

void movenegative(vector<int>&nums ){
     for(int i=0 ; i <nums.size();i++){
        sort(nums.begin(),nums.end());
   
    }
}
void print(vector<int>&nums){
    for (int i=0 ; i<nums.size();i++){
        cout<<nums[i]<<" ";
    }
}



int main(){
    vector<int>nums ;
    nums={-1,5,-7,6,7,-8,-5,7,3};

    movenegative(nums);

    print(nums);




return 0;


}