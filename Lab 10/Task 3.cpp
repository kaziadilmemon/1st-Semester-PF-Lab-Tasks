 /*Create an employee class. The member should comprise an int for storing the employee number,
 and float for the employee's salary. Member functions should allow the user to enter this data 
 and display it.Write a main() function that allows the user to enter data for three employees 
 and display it.*/
#include<iostream>
Using namespace std;
class employee{
public:
int set_data1(int emp_no , float emp_salary)
{ cout<<"the 1st employee number: "<<emp_no<<endl;
 cout<<"the 1st employee salary: "<<emp_salary<<endl;
	}	
int set_data2(int emp_no , float emp_salary)
{ cout<<"the 2nd employee number: "<<emp_no<<endl;
 cout<<"the 2nd employee salary: "<<emp_salary<<endl;
	}	
int set_data3(int emp_no , float emp_salary)
{ cout<<"the 3rd employee number: "<<emp_no<<endl;
 cout<<"the 3rd employee salary: "<<emp_salary;
	}
};
int main()
{int num1,num2,num3;float sal1,sal2,sal3;
employee p1,p2,p3;
cout<<"enter first employee's employee number and salary respectively: ";cin>> num1 >> sal1;
p1.set_data1(num1,sal1);
cout<<"enter the 2nd employee's employee number and salary respectively: ";cin>>num2 >>sal2;
p2.set_data2(num2,sal2);
cout<<"enter the 3rd employee's employee number and salary respectively: ";cin>>num3 >>sal3;
p3.set_data3(num3,sal3);}


