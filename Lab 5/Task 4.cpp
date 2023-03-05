#include<iostream>

using namespace std;
int main() {
	char c;
	cout<<"vowels	consonants"<<endl;
	for(  c=65;c<=90;c++){
		if(c==65||c==69||c==73||c==79||c==85)
		{
		cout<<c;
		}
		else 
		 {
		 cout<<"	"<<c<<endl;
	      }
	}
	return 0;
}
