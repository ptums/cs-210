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

   
void monthlyBalance(float initialInvestment, float monthlyDeposit, float annualInterest, int numberOfYears, bool showMonthlyDeposit) {
   header(showMonthlyDeposit);
   float interest;
   float balance = initialInvestment;
   float monthEnd = 0;

   for(int i = 0; i < numberOfYears; i++) {
      cout << setw(5);
      cout << i + 1;
      cout << setw(15);

      if(showMonthlyDeposit) {
         interest = (balance + monthlyDeposit) * ((annualInterest / 100) / 12);
         monthEnd = monthEnd + interest;
         balance = balance + monthlyDeposit + interest;

      }else {
         interest = (balance) * ((annualInterest / 100));
         balance = balance + interest;
      }
     
     cout << balance;
     cout << setw(20);

     if(showMonthlyDeposit) {
      cout << monthEnd;

     } else {
        cout << interest;
     }

     cout << endl;
   }

}

