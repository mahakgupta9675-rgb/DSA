// Find Element Occurring Odd Number of Times

#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int a[n];

    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }

    for(int i = 0; i < n; i++) {
        int count = 0;

        for(int j = 0; j < n; j++) {
            if(a[i] == a[j]) {
                count++;
            }
        }

        if(count % 2 != 0) {
            cout << "Element occurring odd number of times: " << a[i]<<" ";
            break;
        }
    }

    return 0;
}