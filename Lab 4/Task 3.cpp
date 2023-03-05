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
	if(i<j&&j<k){cout<<"increasing order"<<endl;}
	else if(i>j&&j>k){cout<<"decreasing order"<<endl;}
	else cout<<"no further calculation"<<endl;
	return 0;
	
}
