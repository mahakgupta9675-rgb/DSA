#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

// Iterative approach - O(n) Time and O(1) Space

bool isSorted(vector<int>& arr) {
    
    for (int i = 1; i < arr.size(); i++)
        if (arr[i - 1] > arr[i])
            return false;

    return true;
}

int main() {
    vector<int> arr = { 10, 20, 30, 40, 50 };
    cout << (isSorted(arr) ? "true\n" : "false\n");
    return 0;
}

//Using Built-in Methods - O(n) Time and O(1) Space

bool isSorted(vector<int> &arr){
    
    // is_sorted() is a built-in method
    return (is_sorted(arr.begin(), arr.end()));
}

int main() {
    
    vector<int> arr = { 10, 20, 30, 40, 50 };
    if(isSorted(arr))
        cout<<"true"<<endl;
    else 
        cout<<"false"<<endl;
    return 0;
}