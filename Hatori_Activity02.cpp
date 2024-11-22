#include <iostream>
#include <string>
using namespace std;

int main() {
    int age;
    bool withParent;
    string time;
    double money;

    // Input the user's age
    cout << "Enter your age: ";
    cin >> age;

    // Input if the user is with a parent
    cout << "Are you with a parent? (1 for Yes, 0 for No): ";
    cin >> withParent;

    // Input the time (matinee or evening)
    cout << "Enter the time (matinee/evening): ";
    cin >> time;

    // Input the amount of money the user has
    cout << "Enter the amount of money you have: ";
    cin >> money;

    // Display movie options based on age and parental supervision
    cout << "Movies you can watch: ";
    if (age < 13) {
        if (withParent) {
            cout << "G, PG" << endl;
        } else {
            cout << "G" << endl;
        }
    } else if (age >= 13 && age < 16) {
        if (withParent) {
            cout << "G, PG, R" << endl;
        } else {
            cout << "G, PG" << endl;
        }
    } else {
        cout << "G, PG, R" << endl;
    }

    // Calculate ticket cost and check affordability
    double ticketPrice = (time == "matinee") ? 7.50 : 10.50;
    if (money >= ticketPrice) {
        cout << "You can afford the ticket. The cost is $" << ticketPrice << "." << endl;
    } else {
        cout << "You cannot afford the ticket. The cost is $" << ticketPrice << "." << endl;
    }

    return 0;
}