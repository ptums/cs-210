#include <iostream>

using namespace std;


void header(bool s) {
   cout << setw(25);
   cout << "Balance and Interest ";

   if(s) {
      cout << "With ";
   }else {
      cout << "Without ";
   }

   cout << "Additional Monthly Desposits" << endl;

   cout << nCharString(63, '-') << endl;

   cout << setw(15);
   cout << "Year       ";
   cout << "Year End Balance     ";
   cout << "Year End Earned Interest";
   cout << endl;
   cout << nCharString(63, '=') << endl;

}

void monthlyBalance(bool showMonthlyDeposit) {
   header(showMonthlyDeposit);
}

