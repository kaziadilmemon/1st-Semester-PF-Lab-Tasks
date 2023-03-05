#include<iostream>
using namespace std;
int main() 
{ 
int num1;
cout<<"enter the number "<<endl;
cin>>num1;
if(num1%2==1)
cout<<" then it is odd number prints it square "<<num1*num1<<endl;
else if(num1%2==0){
 	if(num1==0)
		cout<<"the number is equal to 0 then makes it double figure "<<num1+10<<endl;
else
	cout<<" then it is even number makes it odd "<<num1+1<<endl;
}
else 
cout<<" no futher calcualtion"<<endl;
return 0;
	
} 

