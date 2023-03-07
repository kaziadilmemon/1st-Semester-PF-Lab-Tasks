//1. Write a C++ program to generate the results as shown below:
//   Results:  

//   		 =======Quizzes===============
//			 Enter the score of the first quiz: 90
//			 Enter the score of the second quiz: 75
//			 Enter the score of the third quiz: 91

//			 =======Mid-term==============
//			 Enter the score of the mid-term: 80

//			 =======Final=================
//			 Enter the score of the final: 89  

//				Quiz Total:  256
//				Mid-term:    80
//				Final:       89
//				……………………
//				Total:       425

#include <iostream>
using namespace std;

int main() {
	int q1;
	int q2;
	int q3;
	int m;
	int f;
	int qt;
	int t;
	
	cout << "=============Quizzes==============\n";
	
	cout << "Enter the score of first quiz:  ";
	cin >> q1;
	
	cout << "Enter the score of second quiz: ";
	cin >> q2;
	
	cout << "Enter the score of third quiz:  ";
	cin >> q3;
	
	cout << endl;
	
	cout << "=============Mid-term=============\n";
	
	cout << "Enter the score of mid-term:    ";
	cin >> m;
	
	cout << endl;
	
	cout << "===============Final==============\n";
	
	cout << "Enter the score of final:       ";
	cin >> f;
	
	cout << "\n\n";
	
	qt = q1 + q2 + q3;
	cout << "Quiz total: " << qt << endl;
	cout << "Mid-term:   " << m << endl;
	cout << "Final:      " << f << endl;
	
	cout << "______________" << endl;
	
	t = (qt + m + f);	
	cout << "Total:      " << t;
	
return 0;
	
}
