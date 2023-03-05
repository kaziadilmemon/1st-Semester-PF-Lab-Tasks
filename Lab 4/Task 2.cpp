#include<iostream>
using namespace std;
int main() {
	int Tclassheld;cout<<"Total classes"<<endl;
	cin>>Tclassheld;
	int classattend;cout<<"classes held"<<endl;
	cin>>classattend;
	float per=((float)classattend/Tclassheld*100);
	cout<<"show your percentage"<<per<<endl;
	if(per>=75){cout<<"you can sit in exam"<<endl;
	}
	else cout<<"you cannot sit in exam"<<endl;
	return 0;
}
