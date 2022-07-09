
#include <iostream>
#include "CurrentInvestment.h"
#include "PrintHeaderMessage.cpp"
#include "PrintContinueMessage.cpp"
#include "MonthlyBalance.cpp"

using namespace std;

int main()
{
   CurrentInvestment investment;
   float initialInvestment;
   float monthlyDeposit;
   int annualInterest;
   int numberOfYears;


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
   
   printHeaderMessage(getInitialInvesment, getMonthlyDeposit, getAnnualInterest, getNumberOfYears);
   printContinueMessage();
   monthlyBalance(false);
   printContinueMessage();
   monthlyBalance(true);

   return 0;
}
