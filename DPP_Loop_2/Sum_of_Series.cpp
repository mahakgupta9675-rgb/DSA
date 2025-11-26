//. Print the sum of this series :
// 1 - 2 + 3 - 4 + 5 - 6… upto ‘n’.


#include <iostream>
using namespace std;

int main(){
	int n,sum=0;
	cout<<"enter the value of n ";
	cin>>n;
	for (int i=1;i<=n;i++){
		if(i%2==0){
			sum=sum - i;
		}
		else{
			sum=sum + i;
		}
	}
	cout<<"the sum of the series is "<<sum<<endl;
	return 0;

}