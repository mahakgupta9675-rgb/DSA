// Print the factorials of first ‘n’ numbers.

#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int factorial=1;
    for(int i = 1; i<=n; i++){
        factorial=factorial*i;
        cout<<factorial<<endl;
    }
}
// Sample Output : 10
// 1
// 2
// 6
// 24
// 120
// 720
// 5040
// 40320
// 362880
// 3628800