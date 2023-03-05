#include<iostream>
using namespace std;
struct student{
	int studentsobtainedmarks;
	float studenttotalmarks;
};
int main(){
	student ali;
	ali.studenttotalmarks;
	cout<<"ali total marks "<<endl;
	cin>>ali.studenttotalmarks;
	ali.studentsobtainedmarks;
	cout<<"ali obtaiend marks "<<endl;
	cin>>ali.studentsobtainedmarks;
	float per=(ali.studentsobtainedmarks/ali.studenttotalmarks*100);
	cout<<" ali percentage "<<per<<endl;
	return 0;
	
	
	
}

