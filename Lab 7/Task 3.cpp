#include<iostream>
using namespace std;
int swap(int a ,int b){
	cout<<"the first number before "<<a<<"the second number before "<<b<<endl;
	int c;
	c=a;
	a=b;
	b=c;
	cout<<"the first number after "<<a<<"the second number after "<<b<<endl;
	return a,b;
}
int main(){
	int a=7;
	int b=9;
	swap(a,b);
	return 0;
}
