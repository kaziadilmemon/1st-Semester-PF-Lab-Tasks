class product {
protected:
	string name,description;
	float price;
public :
void set_price(){
	cout<<"enter the price of product:  ";   cin>>price;
	cout<<"enter name of product:  ";   cin>>name;
	cout<<" enter the description:  ";   cin>>description;
	cout<<"name of product:  "<<name<<endl;
	cout<<"description :  "<<description<<endl;
	cout<<"peoduct price:  "<<price<<endl;}
};
class medicine: public product{
private:
	string mg_date;
	string exp_date;
public:
	void set_date(){
	cout<<"enter the manufacture date: ";  cin>>mg_date;	
	cout<<"enter the expire date:   ";  cin>>exp_date;
	cout<<endl<<"manufature date of medicine :   "<<mg_date<<endl;
	cout<<endl<<"expire date of medicine:  "<<exp_date<<endl<<endl;	
	}
};
class book : public product{
protected:
    string author_name;
	string edition;
public:	 	
	void set_author(string au_name){
	author_name=au_name;
	cout<<"the author name:   "<<au_name<<endl;
	cout<<endl<<"enter the edition :  "; cin>>edition;
	cout<<endl<<"book edition is:  "<<edition<<endl;		}
};
int main()
{ medicine m,m1;
	m.set_price();
	m.set_date();
	cout<<endl;
	m1.set_price();
	m1.set_date();
 book b1;
 b1.set_price();
 b1.set_author("anees hussain");	
}
