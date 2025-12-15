//Calculate the product of all the elements in the given array

#include <iostream>
using namespace std;

int main() {
    int arr[]={3,6,2,8,7};
    int sum = 1;

    for(int i=0; i<5; i++){
        sum = sum*arr[i];
    }
    
    cout<<sum;
}