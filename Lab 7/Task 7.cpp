#include<iostream>
using namespace std;
int i=0;
int username(string name){
	if(i<name.length()){
		cout<<name[i]<<endl;
		i++;
		username(name);
	}
	else 
	return 1;
	}
	int main(){
	string b;
	cout<<"enter  name"<<endl;
	cin>>b;
	username(b);
	return 0;	
	
}
