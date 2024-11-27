#include <iostream>
#include <string>
using namespace std;

int main() {
    int age;
    char withParent;
    string showTime;
    double ticketPrice;

    // Input age
    cout << "Enter your age: ";
    cin >> age;

    // Input parent accompaniment
    cout << "Are you with a parent? (Y/N): ";
    cin >> withParent;

    // Input show time preference
    cout << "Do you want to attend a Matinee or Evening show? (Enter 'Matinee' or 'Evening'): ";
    cin >> showTime;

    // Determine ticket price
    if (showTime == "Matinee" || showTime == "matinee") {
        ticketPrice = 7.50;
    } else if (showTime == "Evening" || showTime == "evening") {
        ticketPrice = 10.50;
    } else {
        cout << "Invalid show time entered. Exiting program.";
        return 1;
    }

    // Determine allowed movie ratings
    cout << "You can watch movies with the following ratings: ";
    if (age < 13) {
        if (withParent == 'Y' || withParent == 'y') {
            cout << "G, PG";
        } else {
            cout << "G";
        }
    } else if (age >= 13 && age < 16) {
        if (withParent == 'Y' || withParent == 'y') {
            cout << "G, PG, R";
        } else {
            cout << "G, PG";
        }
    } else { // age >= 16
        cout << "G, PG, R";
    }

    // Display ticket price
    cout << "\nTicket price: $" << ticketPrice << endl;

    return 0;
}
