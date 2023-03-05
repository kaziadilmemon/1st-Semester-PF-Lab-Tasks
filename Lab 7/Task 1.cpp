#include<iostream>
using namespace std;
int largernum(int num1,int num2){
	if(num1>num2){
		cout<<"first number is greater : "<<num1<<endl;
	}
	if(num2>num1){
		cout<<"second number is greater : "<<num2<<endl;
	}
	return num1,num2;
}
int main(){
	int a,b;
	cout<<"enter the first number"<<endl;
	cin>>a;
	cout<<"enter the second number"<<endl;
	cin>>b;
	largernum(a,b);
	return 0;
}
