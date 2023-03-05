#include<iostream>
using namespace std;
int swap(int&n1,int&n2){
	int n3=n1;
	n1=n2;
	n2=n3;
	
}
int main(){
	int n1=45;
	int n2=56;
	cout<<"the value of n1 and n2 before respectively"<<n1<<"  "<<n2<<endl;
	swap(n1,n2);
	cout<<"the value of n1 and n2 after respectively"<<n1<<"  "<<n2<<endl;
	return 0;
}
