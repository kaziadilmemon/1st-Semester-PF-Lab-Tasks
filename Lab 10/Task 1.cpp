/*Create a class having 4 functions, add, sub, muland div. Each function accepts 2 
parameters and returns the sum,difference, multiplication and division of these numbers 
Create a main () function that uses the above class.*/
#include<iostream>
Using namespace std;
class operation{
	public:
	int a,b;
int add(int a,int b){
	cout<<"the sum of two numbers: "<<a+b<<endl;}	
int sub(int a,int b){
  cout<<"the subtraction ="<<a-b<<endl;}
int mult(int a,int b){
	cout<<"the multiplication of two number="<<a*b<<endl;}
int division(int a,int b){
cout<<"the divison of two number="<<a/b<<endl;}		
}; 
int main(){
	operation op;
	int a,b;
	cout<<"enter the first and second number: ";cin>> a >> b;
	op.add(a,b);
	op.sub(a,b);
	op.division(a,b);
	op.mult(a,b);  }
