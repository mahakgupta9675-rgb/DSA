// // butforce approch--------------------------
// class Solution {
// public:
//     int singleNnumber(vector<int>& nums) {
//         for(int i=0; i<nums.size; i++){
//             int count=0;
//             for(int j=0; j<nums.size; j++){
//                 if(nums[i]==nums[j]){
//                     count++;
//                 }
//             }
//             if(count==1){
//                 return nums[i];
//             }
//         }
//     }
// };
// //optimal approch----------------------------
// class Solution {
// public:
//     int singleNnumber(vector<int>& nums) {
//         int ans=0;
//         for(int i=0; i<nums.size(); i++){
//             ans=ans^nums[i];
//         }
//         return ans;
        
//     }
// };