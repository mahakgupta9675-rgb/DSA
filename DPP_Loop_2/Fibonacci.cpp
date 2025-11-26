// Print first n’ Fibonacci numbers.

#include <iostream>
using namespace std;

int main(){
	int n,a=0,b=1,next;
	cin>>n;
	cout<<a<<endl;
	cout<<b<<endl;
	for(int i=2;i<n;i++){
		next=a+b;
		cout<<next<<endl;
		a=b;
		b=next;
	}
	return 0;
}
