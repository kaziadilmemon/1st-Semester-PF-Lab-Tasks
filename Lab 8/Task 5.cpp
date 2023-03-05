#include<iostream>

using namespace std;

int main(){
	int size=5;
	int arr[size]={1,2,3,4,5};
	int sum=0;
	int pro=1;
	for(int i=size-1;i>size-3;i--){
		cout<<arr[i]<<endl;
		sum+=arr[i];
		pro*=arr[i];
	}
	cout<<sum<<endl<<pro;
	return 0;
}
