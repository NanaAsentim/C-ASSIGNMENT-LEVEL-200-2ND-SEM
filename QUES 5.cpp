#include <iostream>
using namespace std;

int main() {
    int firstValue;
    int secondValue;


    cout << "Enter the first value: ";
    cin >> firstValue;


    cout << "Enter the second value: ";
    cin >> secondValue;

    if (firstValue > secondValue) {
        cout << "First value is greater" << endl;
    } else {
        cout << "Second value is greater" << endl;
    }

    return 0;
}
