#include <iostream>
using namespace std;
class Tea{//starting of class 
	private:
	float sugar;
	float water;
	float milk;
	float teadust;
	//above private members initilized 
	public: 
	void maketea(float sugarqty, float waterqty, float milkqty, float teadustqty){
		sugar=sugarqty;
		water=waterqty;
		milk=milkqty;
		teadust=teadustqty;
	}//make tea function that is consist 4 parameters and intilized to private members of class  
	void showdata(){
	cout<<"Amount of sugar   is "<<sugar<<"g";
	cout<<"\nAmount of water   is "<<water<<"g";
	cout<<"\nAmount of Milk    is "<<milk<<"g";
	cout<<"\nAmount of teadust is "<<teadust<<"g";
	cout<<"\nMix them ";
	cout<<"\nTea is ready "<<char(1);
	}//showdata function that shows all inputs given and and shows them
};
int main(){
	Tea t1;//obj of class tea
	float sugar,water,milk,teadust;//used to take input
	cout<<"Enter amount of sugar in grams :";
	cin>>sugar;
	cout<<"Enter amount of water in grams :";
	cin>>water;
	cout<<"Enter amount of milk in grams :";
	cin>>milk;
	cout<<"Enter amount of teadust in grams :";
	cin>>teadust;
	if(sugar>=0 && water>=0 && milk>=0 && teadust>0)//other can't be negative values 
	//and tea dust can't be 0 because without teadust tea can't be prepared
	{
	system("cls");//clear screen after input
	system("color 34");
	t1.maketea(sugar,water,milk,teadust);//function called and value assigned 
	t1.showdata();//function show values called
	}//if ends here
		else cout<<"Some ingredient missing !";
	return 0;
}
