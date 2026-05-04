// Given an array, print elements present at even indexes.

#include<iostream>
using namespace std;

int main(){
    int arr[]={6,5,4,2,8,7};

    for(int i = 0; i<6 ;i++){
        if(i%2==0){
            cout<<arr[i]<<" ";
        }
    }
}