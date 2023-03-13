#include<iostream>
using namespace std;
class person{
protected:	
	string name;
public:
    person(){}
   void set_name(string Name){
   	name=Name;
   }	
   void get(){
   	cout<<"name of student:     "<<name<<endl;
   } 	
};
class student: public person{
private:	
	string roll;
protected:	
 string department;
public:
	void set_dept(string dept)
	{ department=dept;
		}
	void set_roll(string r){
		roll=r;
	}	
void display_data(){
	cout<<"roll no: "<<roll<<endl;
	cout<<"department of student: "<<department;
}	
};
class employee : public person{
private:	
	string emp_no;
protected:
 	string designation;
 	double salary;
public:
string set_desg(string desg)
 {  designation=desg;
	return designation;  } 	
double set_salary()
{  cout<<"enter salary: "; cin>>salary;
 cout<<"enter employee number: "; cin>> emp_no;
  cout<<"salary:  "<< salary<<endl;
  cout<<"employee no:  "<< emp_no;}	  
};
int main()
{ student s;
	s.set_name("Adil");
	s.get();
	s.set_dept("software");
	s.set_roll("21sw035");
	s.display_data();
	cout<<endl<<endl;
	 employee e;
	 e.set_name("arham");
	 e.get();
	 e.set_desg("admin");
	 e.set_salary();
}
