#include <iostream>
using namespace std;

int main() {
    for (int i = 1; i <= 8; i++)
		{
        for (int j = i; j >= 1; j--)
			{
            cout << j << " ";
        }
        cout << endl;
    }
    return 0;
}