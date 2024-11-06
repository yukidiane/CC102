#include <iostream>

using namespace std;

int main()
{
	char choice;
	cout << "It is raining? [y/n]: ";
	cin >> choice;
	if(choice == 'y') {
		cout << "Get an umbrella.";
	}
	else if(choice == 'n'){
		cout << "It is sunny.";
	}
	else {
		cout << "Invalid Input.";
	}
	return 0;
}