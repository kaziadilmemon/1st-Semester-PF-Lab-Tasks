#include<iostream>
#include<conio.h>
using namespace std;
int main() 
{
	string studentname,lastname,housenumber,astreet,acity,astate,postalcode; 
	cout<<"enter the student name"<<endl;
	cin>>studentname>>lastname;
	cout<<"enter the house number ";
	cin>>housenumber;
	cout<<"enter the a street number "<<endl;
	cin>>astreet;
	cout<<"enter the city"<<endl;
	cin>>acity;
	cout<<"enter the state"<<endl;
	cin>>astate;
	cout<<"enter the postal code"<<endl;
	cin>>postalcode;
	cout<<"so "<<studentname<<" "<<lastname<<"your address is   "<<endl;
	cout<<"  "<<"house number  "<<housenumber;
	cout<<" "<<" street  "<<astreet<<endl;
	cout<<" "<<" city  "<<acity<<"  "<<" state  "<<astate<<"  "<<"postal code  "<<postalcode<<endl;
	return 0;
}
