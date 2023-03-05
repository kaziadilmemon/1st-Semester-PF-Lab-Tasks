#include<iostream>
using namespace std;
void zerosmaller(int &num1,int &num2){
	if(num1<num2){
		num1=0;
	}
	if(num2<num1){
		num2=0;
	}
}
int main(){
	int num1,num2;
	cout<<" enter first numeber"<<endl;
	cin>>num1;
	cout<<"enter second number"<<endl;
	cin>>num2;
	zerosmaller(num1,num2);
	cout<<"num1 = "<<num1<<endl<<"num2 = "<<num2<<endl;
	
	return 0;
}
