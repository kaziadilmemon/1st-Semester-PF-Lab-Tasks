#include <iostream>
using namespace std;

int main() {
    int array[10] = {1, 2, 3, 5, 8, 10, 12, 23, 28, 15};
    int searchValue;
    bool isFound = false;

    cout << "Enter an integer value to search for: ";
    cin >> searchValue;

    for (int i = 0; i < 10; i++) {
        if (array[i] == searchValue) {
            isFound = true;
            break;
        }
    }

    if (isFound) {
        cout << "Number is found" << endl;
    } else {
        cout << "Number does not found" << endl;
    }

    return 0;
}







