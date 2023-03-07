#include <iostream>
using namespace std;
class BankAccount{
	private:
		int accno;
		string customer;
		float balance;
		float withdraw;
		float deposit;
	public:
		void CreateAccount(){ 
			cout<<"Enter your name: ";
			getline(cin, customer);
			cout<<"Enter Account no: ";
			cin>>accno;
			cout<<"Balance: ";
			cin>>balance;
		}
		void AccountDetails(){ 
			cout<<"Name: "<<customer<<endl
				<<"Account Number: "<<accno<<endl
				<<"Balance: $"<<balance<<endl;
		}
		void CheckBalance(){ 
			cout<<"Current amount: $"<<balance<<endl;
		} 
		void Withdraw(){ 
			cout<<"Enter the amount you want to withdraw: ";
			cin>>withdraw;
			if(withdraw <= balance ){
				if(withdraw >0){
				
				balance -= withdraw;
				cout<<'$'<<withdraw<<" withdrawn successfully!"<<endl;
				cout<<"Your current balance: $"<<balance<<endl;	
				}
				else{
					cout<<"invalid input:"<<endl;
				}
			}
			else{
				cout<<"Not enough money in your account!"<<endl;
			} 
		} 
		void Deposit(){
			cout<<"Enter the money you want to deposit: ";
			cin>>deposit;
			if(deposit>=0){
				balance += deposit;
				cout<<'$'<<deposit<<" added to your account successfully!"<<endl;
				cout<<"Your current balance is: $"<<balance<<endl;
			} 
			else{
				cout<<"Deposit can't be less than zero!"<<endl;
			} 
		}
}; 
int main(){
	BankAccount first; 
	first.CreateAccount();
	bool condition = true;
	while(condition == true){
		char choice;
		cout<<"\nWhat would you like to perform?\n1)Deposit\n2)Withdraw\n3)Account Details\n4)Check Balance\n0)EXIT"<<endl;
		cin>>choice;
		switch (choice)
		{
			case '0':
				condition = false;
				break;
			case '1':
				system("cls");
				first.Deposit();
				break;
			case '2':
				system("cls");
				first.Withdraw();
				break;
			case '3':
				system("cls");
				first.AccountDetails();
				break;
			case '4':
				system("cls");
				first.CheckBalance();
				break;
			default:
				system("cls");
				cout<<"Invalid Input!"<<endl;
				break;
		} 
	} 
	return 0;
}
