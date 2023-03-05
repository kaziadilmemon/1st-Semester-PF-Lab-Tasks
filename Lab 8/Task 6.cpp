#include <iostream>
using namespace std;

int main() {
   int arr[] = { 5, 2, 7, 1, 8, 3 };
   int n = sizeof(arr) / sizeof(arr[0]);
   int smallest = arr[0], index = 0;
   for (int i = 1; i < n; i++) {
      if (arr[i] < smallest) {
         smallest = arr[i];
         index = i;
      }
   }
   cout << "Smallest element is : " << smallest << endl;
   cout << "Index of smallest element: " << index << endl;
   return 0;
}
