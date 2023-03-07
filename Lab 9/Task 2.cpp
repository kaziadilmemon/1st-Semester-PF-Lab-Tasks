#include <iostream>
using namespace std;
class Tea{
    private:
        float sugar, water, milk, teadust; // data members
    public:
        void showTea(){ // Will display the contents and their quantities
            cout<<"Sugar = "<<sugar<<"grams"<<endl
                <<"Water = "<<water<<"grams"<<endl
                <<"Milk = "<<milk<<"grams"<<endl
                <<"Teadust = "<<teadust<<"grams"<<endl;
        } // showTea() ends
        void makeTea(float sqty=0, float wqty=0, float mqty=0, float tqty=0){ // Will take the ingredients and will store it in the private data members
            cout<<"Enter sugar grams: ";
            cin>>sqty;
            cout<<"Enter Water grams: ";
            cin>>wqty;
            cout<<"Enter Milk grams: ";
            cin>>mqty;
            cout<<"Enter Teadust grams: ";
            cin>>tqty;
            if(sqty >= 0 && wqty >= 0 && mqty >= 0 && tqty >= 0){
                // values assigned to the data members that were taken from the user
                sugar = sqty;
                water = wqty;
                milk = mqty;
                teadust = tqty;
                system("cls"); // Will clear the previous junk from the screen
                showTea();
                cout<<"\nTea is ready!"<<endl;
            } // if statement ends
            else{
                cout<<"Values can't be less than zero!"<<endl; // if the values are negative the program will not except it and will print this line
            } // else statement ends
        } // makeTea() ends
}; // Tea ends
int main(){
    Tea myTea; // object myTea created of class Tea
    myTea.makeTea(); // Function called for making tea
    return 0;
} // main() ends
