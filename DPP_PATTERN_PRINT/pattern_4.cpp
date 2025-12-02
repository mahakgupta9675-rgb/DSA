#include<iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    int i=1;
    while(i<=n+1){
        int j=1;
        while(j<=i){
            if(i%2==0){
                char ch='A'+j-1;
                cout<<ch;}
            else{
                cout<<j;
            }
            j++;    
        }
        cout<<endl;
        i++;
    }
}
//Input:4
//output:
// 1
// AB
// 123
// ABCD
// 12345