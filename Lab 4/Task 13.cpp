#include<iostream>
using namespace std;
int main() 
{
	int x=2,y=5,z=0;
	cout<<"find the values of the following data"<<endl;
	cout<<"the value of x==2 is"<<(x==2)<<endl;
	cout<<"the value of x!=5 is"<<(x!=5)<<endl;
	cout<<"the value of x!=5&&y>=5 is"<<((x=!5)&&(y>=5))<<endl;
	cout<<"the value of z!0||x==2 is"<<((z=!0)||(x==2))<<endl;
	cout<<"the value of !y<10"<<(!y<10)<<endl;
	return 0;
}
