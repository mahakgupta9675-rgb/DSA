//Print only the negative numbers from the array.

#include<iostream>
using namespace std;

int main(){
    int arr[]={-4,8,3,9,-5};

    for(int i=0; i<6; i++){
        if(arr[i]<0){
            cout<<arr[i]<<" ";
        }
    }
}