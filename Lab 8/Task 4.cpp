#include<iostream>
using namespace std;
int main(){ 
 int array[10]={1,2,3,5,8,10,12,23,28,15};
 for(int i=0;i<10;i++){
 	if(array[i]%2==1){
 		cout<<array[i]<<endl;
	 }
}
 	return 0;
 }
