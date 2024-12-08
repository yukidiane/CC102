#include <iostream>
using namespace std;

int main() {
   char first_symbol, second_symbol;
   cout << "Enter 1st symbol: ";
   cin >> first_symbol;
   cout << "Enter 2nd symbol: ";
   cin >> second_symbol;
   for (int i = 0; i <= 6; i++) 
   {
      for (int j = 0; j < i; j++) 
	  {
         cout << "" << first_symbol;
      }
      cout << "" << second_symbol << endl;
   }
   for (int i = 6; i >= 0; i--) 
   {
      for (int j = 0; j < i; j++) 
	  {
         cout << "" << first_symbol;
		}
        cout << "" << second_symbol << endl;
   }

   return 0;
}