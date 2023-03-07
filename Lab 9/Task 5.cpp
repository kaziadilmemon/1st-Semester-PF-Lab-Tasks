//make program construct structure Students have two members obtained marks and total
#include <iostream>
using namespace std;
struct Student{
	//declearing structure has two members Obtained_marks and Total_marks
	int Obtained_marks;
	int Total_marks;
};
int main(){
	Student s1;//variables of structure student
	float prs;
	cout<<"Enter Obtained marks of student :";
	cin>>s1.Obtained_marks;//giving value to Obtained marks
	cout<<"Enter Total marks:";
	cin>>s1.Total_marks;//giving value to total marks
	prs=(float)s1.Obtained_marks/s1.Total_marks*100;
	cout<<"Percentage of student is :"<<prs<<"%";
	return 0;
}
