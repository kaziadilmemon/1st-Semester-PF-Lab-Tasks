// Task.4 
// Write a C++ program to declare an integer variable Hours and
// assign it a value of your choice and convert Hours in terms of minutes.

#include <iostream>
using namespace std;

int main() {
	int hours;
	
	cout << "Enter time in hours: ";
	cin >> hours;
	
	hours = (hours * 60);
	
	cout << "Time in minutes: " << hours;
	return 0;
}
