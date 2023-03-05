#include<iostream>
using namespace std;
void fun(int& i){
	if(i>4){

cout<<"final i = "<<i;
			}
	else{
	i++;
	fun(i);
	}
}
int main(){
	int i=1;
cout<<"intial i = "<<i<<endl;
	fun(i);
}
