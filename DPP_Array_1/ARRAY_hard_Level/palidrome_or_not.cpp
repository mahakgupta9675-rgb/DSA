// 3. Given an array **arr**, the task is to find whether the **arr** is palindrome or not. If the **arr** is palindrome then return **true** else return **false.**

#include <iostream>
using namespace std;



int main() {
    int n;
    cin >> n;

    int arr[n];

    for(int i = 0; i < n; i++) {
        cin >> arr[i];
}
    for(int i =0; i<n; i++ ){
        for (int j=n-1;j>0;j--){
            if(arr[i]==arr[j]){
                cout<<"It is a palindrome";
            }
        }
}
    return 0;

}
