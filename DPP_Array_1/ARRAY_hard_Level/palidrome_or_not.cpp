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

    int start = 0, end = n - 1;
    bool isPalindrome = true;

    while(start < end) {
        if(arr[start] != arr[end]) {
            isPalindrome = false;
            break;
        }
        start++;
        end--;
    }

    if(isPalindrome)
        cout << "It is a palindrome";
    else
        cout << "It is not a palindrome";

    return 0;
}
