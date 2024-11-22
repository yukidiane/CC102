#include <iostream>

using namespace std;

int main() {                                                                                                                                                                                                                                                                                                                
    double temperature;

    // Input the temperature
    cout << "Enter the temperature in Fahrenheit: ";
    cin >> temperature;

    // Conditions to determine which jacket to recommend
    if (temperature < 32) {
        cout << "Bring a heavy jacket." << endl;
    } else if (temperature >= 32 && temperature <= 50) {
        cout << "Bring a light jacket." << endl;
    } else if (temperature > 50) {
        cout << "No need to bring jacket." << endl;
    }

    return 0;
}
