#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;


vector<int> revese(vector<int>& arr){
    int n = arr.size();
    // for(int i =0; i<n/2; i++){
    //     swap(arr[i],arr[n-i-1]);}
    int i=0;
    int j = arr.size()-1;
    while (i<=j){
        int temp =arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
        i++;
        j--;
    }
}

//using _Temporary array- O(n) Time and O(n) Space

void reverseArray(vector<int> &arr) {
    int n = arr.size();
    vector<int> temp(n);

    for(int i = 0; i < n; i++)
        temp[i] = arr[n - i - 1];

    for(int i = 0; i < n; i++)
        arr[i] = temp[i];
}

//Using Two Pointers - O(n) Time and O(1) Space

void reverseArray(vector<int> &arr) {
    int left = 0, right = arr.size() - 1;
    while(left < right) {
        swap(arr[left], arr[right]);
        left++;
        right--;
    }
}

// Using Single Pointer - O(n) Time and O(1) Space

void reverseArray(vector<int> &arr) {
    int n = arr.size();
    for(int i = 0; i < n/2; i++) {
    	swap(arr[i], arr[n - i - 1]);
    }
}

// Using Inbuilt Methods - O(n) Time and O(1) Space

void reverseArray(vector<int> &arr) {
    reverse(arr.begin(), arr.end());
}


int main(){
    vector<int> v;
    v.push_back(27);
    v.push_back(99);
    v.push_back(44);
    v.push_back(25);
    v.push_back(66);

    revese(v);
    for(int i =0; i<v.size() ; i++){
        cout<<v[i];
    }
    return 0;
}