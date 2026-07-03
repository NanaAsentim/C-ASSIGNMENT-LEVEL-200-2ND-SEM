#include <iostream>
#include <string>

using namespace std;

int main() {
    string userInput;

    cout << "Enter a string: ";
    cin >> userInput;

    if (userInput == "Hello") {
        cout << "Hello!" << endl;
    } else {
        cout << "Goodbye!" << endl;
    }

    return 0;
}
