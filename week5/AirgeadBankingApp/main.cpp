
#include <iostream>
#include "CurrentInvestment.h"
#include "PrintHeaderMessage.cpp"
#include "PrintContinueMessage.cpp"
#include "AnnualBalance.cpp"

using namespace std;

int main()
{
   CurrentInvestment investment;
   float initialInvestment;
   float monthlyDeposit;
   float annualInterest;
   int numberOfYears;

   printHeaderMessage();

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
   float getAnnualInterest = investment.GetAnnualInterest();
   int getNumberOfYears = investment.GetNumberOfYears();
   
   printHeaderMessage(getInitialInvesment, getMonthlyDeposit, getAnnualInterest, getNumberOfYears);
   printContinueMessage();
   annualBalance(getInitialInvesment, getMonthlyDeposit, getAnnualInterest, getNumberOfYears, false);
   printContinueMessage();
   annualBalance(getInitialInvesment, getMonthlyDeposit, getAnnualInterest, getNumberOfYears, true);

   return 0;
}
