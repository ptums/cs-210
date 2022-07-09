#ifndef CURRENT_INVESTMENT_H
#define CURRENT_INVESTMENT_H

#include <iostream>
using namespace std;

class CurrentInvestment {
   public:
      void SetInitialInvestment(float i);
      void SetMonthlyDeposit(float m);
      void SetAnnualInterest(int a);
      void SetNumberOfYears(int n);
      float GetInitialInvestment() const;
      float GetMonthlyDeposit() const;
      int GetAnnualInterest() const;
      int GetNumberOfYears() const;
      CurrentInvestment();

   private:
      float initialInvestment;
      float monthlyDeposit;
      int annualInterest;
      int numberOfYears;
};

#endif




