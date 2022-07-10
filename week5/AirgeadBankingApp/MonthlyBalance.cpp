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
      cout << setw(7);
      cout << i + 1;
      cout << setw(19);

      if(showMonthlyDeposit) {
         for(int j = 0; j < 12; j++){            
            interest = (balance + monthlyDeposit) * ((annualInterest / 100) / 12);
            monthEnd = monthEnd + interest;
            balance = balance + monthlyDeposit + interest;
         }

      }else {
         interest = (balance) * ((annualInterest / 100));
         balance = balance + interest;
      }
     
     cout << "$" << balance;

     if(showMonthlyDeposit) {
        if(i == 0) {
           cout << setw(23);
        }else {
           cout << setw(22);
        }
      cout << "$" << monthEnd;

     } else {
        cout << setw(25);
        cout << "$" << interest;
     }

     cout << endl;
   }

}

