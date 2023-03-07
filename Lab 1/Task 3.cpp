// Task.3 
// Write a program in C++ to find Size of fundamental data types.

#include <iostream>
#include <string>
using namespace std;

int main() {
	cout << "The size of Fundamental data types in C++: \n\n";
	
	cout << "The size of Integer (int) data types is:   " << sizeof(int) 	<< " bytes" << "\n";
	cout << "The size of Float (float) data type is:    " << sizeof(float)	<< " bytes" << "\n";
	cout << "The size of Double (double) data type is:  " << sizeof(double) << " bytes" << "\n";
	cout << "The size of Character (char) data type is: " << sizeof(char) 	<< " byte" 	<< "\n";
	cout << "The size of Text (strintg) data type is:   " << sizeof(string) << " bytes" << "\n";
	cout << "The size of Boolean (bool) data type is:   " << sizeof(bool) 	<< " byte" 	<< "\n";
	
	return 0;
}
