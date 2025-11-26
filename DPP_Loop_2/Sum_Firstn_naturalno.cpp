// Find the sum of the first n natural numbers. Take n input from the user?

#include <iostream>
using namespace std ;

int main(){
	int n,sum=0;
    cout<<"Enter a number : ";
	cin>>n;
	for (int i=1;i<n;i++){
		sum=sum+i;
		cout<<sum<<endl;
	}
}