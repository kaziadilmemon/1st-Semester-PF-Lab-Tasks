#include<iostream>
using namespace std;
struct employee{
	int employeeno;
	float employeesalary;
};
int main(){
	employee saif;
	saif.employeeno=03324674206;
	saif.employeesalary=5000000;
	cout<<"saif employee number "<<saif.employeeno<<endl;
	cout<<"saif employeesalary  "<<saif.employeesalary<<endl;
	return 0;
}
