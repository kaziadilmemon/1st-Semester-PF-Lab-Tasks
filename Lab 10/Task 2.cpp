/*Create a class called MyClass that has one int member. Include member functions to 
initialize it to 0,
to initialize it to an integer value, to display it. Write a program to test this class*/
#include<iostream>
Using namespace std;
class MyClass{
public:
int member;
	int zero(){
	member=0;
	cout<<"when initialize to zero:"<<member<<endl;}
int value(int a){
member =a;
cout<<"the initialize value:"<<member;}
};
int main()
{MyClass test;
test.zero();
test.value(2);}

