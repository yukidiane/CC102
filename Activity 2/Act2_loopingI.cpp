#include <iostream>
using namespace std;

int main() {

	for(int i = 0; i < 5; i++) {
		for(int j = 0; j < 10; j++) 
		{
			cout << " ";
		}
		for(int j = 0; j < i; j++) 
		{
			cout << "^";
		}
		for(int j = 0; j < 1; j++)
			{
			cout << "*";
		}
		cout << endl;
	}

	for(int i = 0; i < 2; i++) 
	{
		for (int j = 0; j < 10; j++)
			{
			cout << "#";
		}
		for(int j = 0; j < 5; j++)
			{
			cout << "^";
		}
		for (int j = 0; j < 1; j++)
			{
			cout << "*";
		}
		cout << endl;
	}
	
	for(int i = 0; i < 5; i++)
		{
		for(int j = 0; j < 10; j++)
			{
			cout << " ";
		}
		for(int j = i; j < 4; j++)
			{
			cout << "^";
		}
		for(int j = 0; j < 1; j++) 
		{
			cout << "*";
		}
		cout << endl;
	}
}