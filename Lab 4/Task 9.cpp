#include<iostream>
using namespace std;
int main() {
	int i,j,k;
	cout<<"enter the first number"<<endl;
	cin>>i;
	cout<<"enter the second number"<<endl;
	cin>>j;
	cout<<"enter the third number"<<endl;
	cin>>k;
	if(i>j&&i>k)
	cout<<"greatest number is"<<i<<endl;
	else if(i<j&&j>k)
	cout<<"greatest number is"<<j<<endl;
	else if(j<k&&i<k)
	cout<<"greatest number is"<<k<<endl;
	else cout<<"no further calcualtion"<<endl;
	return 0;
}
