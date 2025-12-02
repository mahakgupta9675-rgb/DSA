#include<iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    int i=1;
    while(i<=n){
        int j=1;
        while(j<=i){
            char ch ='a'+j-1;
            cout<<ch;
            j++;
        }
        cout<<endl;
        i++;
    }
}
//Input:4
//output:a
//       ab
//       abc
//       abcd