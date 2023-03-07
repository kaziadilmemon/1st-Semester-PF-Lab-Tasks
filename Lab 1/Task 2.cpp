// Task.2 
// Write a program in C++ to print the sum of two numbers. 
//			Sample Output:
//			-----------------------------------
//			The sum of 29 and 30 is : 59

#include <iostream>
using namespace std;

int main() {
	int x;
	int y;
	int z;
	
	cout << "Enter 1st number: ";
	cin >> x;
	
	cout << "Enter 2nd number: ";
	cin>> y;
	
	z = x + y;
	cout << "The sum of " << x << " and " << y << " is: " << z;
	return 0;
}
