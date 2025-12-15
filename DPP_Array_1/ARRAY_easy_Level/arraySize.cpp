//Take an array input and prints its size.

#include <iostream>
using namespace std;

int main() {
    int n;
    cout<<"Enter a size of array :";
    cin >> n;          

    int arr[n];  

    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout<<"sizeofarr[i] = "<<n<<endl; 
    
}