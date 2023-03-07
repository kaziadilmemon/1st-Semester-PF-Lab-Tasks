//make program construct structure Employee have two members id and salary
#include <iostream>
using namespace std;
struct Employee{
	//declearing structure has two members id and salary
	int id;
	float salary;
};
int main(){
	Employee e1,e2;//variables od Employee
	cout<<"Enter id of first Employee :";
	cin>>e1.id;//giving value to id of e1
	cout<<"Enter salary of first Employee :";
	cin>>e1.salary;//giving value to salary of e1
	cout<<"Enter id of second Employee :";
	cin>>e2.id;//giving value to id of e2
	cout<<"Enter salary of second Employee :";
	cin>>e2.salary;//giving value to salary of e1
	cout<<"ID of first Employee is :"<<e1.id<<"Salary of first Employee is :"<<e1.salary; 		
	cout<<"\nID of second Employee is :"<<e2.id<<"Salary of second Employee is :"<<e2.salary;
	return 0;
}
