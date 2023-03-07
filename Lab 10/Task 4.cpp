/*Create a class that includes a data member that holds a "Serial number" for each object 
created from the class. That is, the first object created will be numbered 1, the second 2, and so on.*/
#include<iostream>
Using namespace std;
int serial=0;
class serial_num{
	public:
	void get_num(){
		serial++;
		cout<<serial<<endl;	
	}	};
	
int main()
{ serial_num s,s1,s2;
s.get_num();	
s1.get_num();
s2.get_num();	
}


