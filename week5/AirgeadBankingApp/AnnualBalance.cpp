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

   cout << "Additional Monthly Deposits" << endl;

   cout << nCharString(63, '-') << endl;

   cout << setw(15);
   cout << "Year       ";
   cout << "Year End Balance     ";
   cout << "Year End Earned Interest";
   cout << endl;
   cout << nCharString(63, '=') << endl;

}

   
void annualBalance(float initialInvestment, float monthlyDeposit, float annualInterest, int numberOfYears, bool showMonthlyDeposit) {
   header(showMonthlyDeposit);
   float interest;
   float balance = initialInvestment;
   float yearEnd = 0;

   for(int i = 0; i < numberOfYears; i++) {
      cout << setw(7);
      cout << i + 1;
      cout << setw(19);

      if(showMonthlyDeposit) {
         for(int j = 0; j < 12; j++){            
            interest = (balance + monthlyDeposit) * ((annualInterest / 100) / 12);
            yearEnd = yearEnd + interest;
            balance = balance + monthlyDeposit + interest;
         }

      }else {
         interest = (balance) * ((annualInterest / 100));
         balance = balance + interest;
      }
     
     cout << "$" << balance;

     if(showMonthlyDeposit) {
        if(i == 0) {
           cout << setw(21);
        }else {
           cout << setw(20);
        }
      cout << "$" << yearEnd;

     } else {
        cout << setw(23);
        cout << "$" << interest;
     }

     cout << endl;
   }

}

