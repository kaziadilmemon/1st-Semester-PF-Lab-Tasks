#include<iostream>
using namespace std;
int i=1;
void function(){
	if(i<6){
		cout<<"21sw035"<<endl;
		i++;
		function();
}
}



int main(){
	function();
}
