/*using OOP to write  a C++ Program to Store Information of a Student in a class*/
class student{
private:
		int id;
	    string roll;
	    string cell_no,b_form;
public:
	void set_data(int Id, string r_no, string cell, string b){
		id=Id;   roll=r_no;   cell_no=cell; b_form=b;
	}    
void get_data(){
		cout<<"id no:  "<<id<<endl<<" roll no: "<<roll<<endl<< "cell No: "<<cell_no;
		cout<<endl<<"b-form number:  "<<b_form<<endl;
	}
void set_info(string name,string father, string caste){
	cout<<"name of student:  "<<name<<endl;
	cout<<"father name of student:  "<<father<<endl;
	cout<<"caste of student:  "<<caste;
}	
};
int main()
{ student s1, s2;
cout<<"     INFORMATION OF FIRST STUDENT   "<<endl;
	s1.set_info("farah ali","ali asghar"," noondani");
	s1.set_data(2311,"21sw0144","0304-553225","5510-6752433-2");
    s1.get_data();
cout<<"     INFORMATION OF SECOND STUDENT   "<<endl;    
     s2.set_info("duaa","Ali","khan");
    s2.set_data(3445,"21sw068","03333682534","6282-2358353-6");
   s2.get_data();}

