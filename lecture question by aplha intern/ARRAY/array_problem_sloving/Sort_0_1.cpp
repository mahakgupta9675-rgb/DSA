#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void segregate0and1(vector<int> &arr) {
        int i =0;
        int j = arr.size()-1;
        while(i<j){
            if(arr[i]==0){ 
                i++;
            }
            else if(arr[j]==1){
                j--;
            }
            //if(arr[i]==1 && arr[j]==0)  
            else{
                swap(arr[i],arr[j]);
                i++;
                j--;}
        }
        
    }


int main() {
    vector<int> arr = { 0, 1, 0, 1, 1, 1 };

    segregate0and1(arr);
    for (int x : arr)
        cout << x << " ";

    return 0;
}




