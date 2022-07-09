
#include <iostream>
#include <iomanip>
#include "CurrentInvestment.h"

using namespace std;

void printMessageHeader(float i = 0, float m = 0, int a = 0, int n = 0) {
   cout << fixed << setprecision(2);
   cout << "********************************" << endl;
   cout << "********** Data Input **********" << endl;
   cout << "Initial Investment Amount: ";

   if(i > 0) {
      cout << "$" << i << endl;
   }else {
      cout << endl;
   }
   
   cout << "Monthly Deposit: ";

   if(m > 0) {
      cout << "$" << m << endl;
   }else {
      cout << endl;
   }


   cout << "Annual Interest: ";

   if(a > 0) {
      cout << "%" << a << endl;
   }else {
      cout << endl;
   }

   cout << "Number of years: ";

   if(n > 0) {
      cout << n << endl;
   }else {
      cout << endl;
   }
   
}

int main()
{
   CurrentInvestment investment;
   float initialInvestment;
   float monthlyDeposit;
   int annualInterest;
   int numberOfYears;

   printMessageHeader();

   cin >> initialInvestment;
   cin >> monthlyDeposit;
   cin >> annualInterest;
   cin >> numberOfYears;

   
   
   investment.SetInitialInvestment(initialInvestment);
   investment.SetMonthlyDeposit(monthlyDeposit);
   investment.SetAnnualInterest(annualInterest);
   investment.SetNumberOfYears(numberOfYears);
   
   float getInitialInvesment = investment.GetInitialInvestment();
   float getMonthlyDeposit = investment.GetMonthlyDeposit();
   int getAnnualInterest = investment.GetAnnualInterest();
   int getNumberOfYears = investment.GetNumberOfYears();
   
   printMessageHeader(getInitialInvesment, getMonthlyDeposit, getAnnualInterest, getNumberOfYears);
   

   return 0;
}
