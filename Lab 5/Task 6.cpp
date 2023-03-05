#include<iostream>
using namespace std;
int main(){
	int count=0;
	char a,b;
	cin>>a>>b;
	for(int i=a+1;i<b;i++){
		char c=i;
		cout<<c<<" ";
		count++; 
	}
	cout<<endl<<" total alphabets numbers"<<count;
	return 0;
}
