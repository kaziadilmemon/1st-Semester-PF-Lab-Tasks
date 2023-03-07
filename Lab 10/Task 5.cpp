/*Develop the Student Registration System by the object oriented scenarios. 
It should consist of two classes namely Student, and Course. */
#include<iostream>
Using namespace std;
class student{
	private:
	int id_no;
	string roll_no;
	public:
	void set_district(string d){
		cout<<d<<endl;
	}
	void set_id_roll(int id, string Roll_no)
	{ id_no=id;
	roll_no=Roll_no;
	}
	string get_id_roll(){
	cout<<id_no<<endl;
	cout<<roll_no<<endl;}
};
class course:public student{
	public: 
	void set_marks(float pf,float eng , int cal){
		cout<<"programing marks: "<<pf;
		cout<<endl<<"english marks :"<<eng<<endl;
		cout<<"calculus marks : "<<cal;
	}
};
int main()
{ course s1,s2;
cout<<"marks of 1st student";       s1.set_marks(19,16,19);
cout<<endl;
cout<<"marks of 2nd student",     s2.set_marks(19,16,14);
cout<<endl<<"district of 1st student: ";   s1.set_district("sanghar");
s1.set_id_roll(0123,"21sw062");
s2.set_id_roll(213,"21sw144");
cout<<"district of 2nd student :  ";    s2.set_district("Mirpurkhas") ;
cout<<"id and roll number of 1st student: ";    s1.get_id_roll();
cout<<"id and roll number of 2nd student:  ";   s2.get_id_roll();

return 0;
}

