#include <iostream>
using namespace std;

int main() {
    int age;

    // Ask for the user's age
    cout << "What is your age? ";
    cin >> age;

    // Evaluate the conditions and respond accordingly
    if (age < 16) {
        cout << "Too young to drive." << endl;
    } else if (age == 16) {
        cout << "Better clear the road." << endl;
    } else if (age > 16) {
        cout << "You are getting pretty old." << endl;
    }

    return 0;
}
