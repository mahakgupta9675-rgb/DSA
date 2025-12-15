//Count how many elements are greater than 100.

#include<iostream>
using namespace std;

int main(){
    int arr[]={101,59,222,343,73,10};
    int count = 0;

    for(int i = 0; i<6; i++){
        if(arr[i]>100){
            count++;
        }
    }
    
    cout<<"Number of element greater then 100: "<<count;
}