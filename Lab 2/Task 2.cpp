//2. Write  a c++ program that takes two numbers from the user at runtime 
//   and display their  Remainder  and Quotient.

#include <iostream>
using namespace std;

int main() {
	int dividend;
	int divisor;
	
	cout << "Enter dividend: ";
	cin >> dividend;
	
	cout << "Enter divisor: ";
	cin >> divisor;
	
	cout << endl;
	
	int quotient;
	int remainder;
	
	quotient = dividend / divisor;
	remainder = dividend % divisor;
	
	cout << "Quotient = " << quotient << "\n";
	cout << "Remainder = " <<  remainder << "\n";
	
	return 0;
}
